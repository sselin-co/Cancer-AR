import logging
import os
import time

import numpy as np
import torch
from torch.autograd import Variable
from detector._SplitComb import SplitComb
from detector._provider import provide
from detector._Detector import DataBowl3Detector
from torch.utils.data import DataLoader
from detector._collate import collate

logging.basicConfig()
logging.getLogger(__name__).setLevel(logging.INFO)
log = logging.getLogger(__name__)

margin = 32
sidelen = 144

detector_config, net, loss, get_pbb = provide()


def detect(testsplit, save_dir, phase='val', n_gpu=1):

    split_comber = SplitComb(
        sidelen,
        detector_config['max_stride'],
        detector_config['stride'],
        margin,
        pad_value=detector_config['pad_value']
    )

    dataset = DataBowl3Detector(
        testsplit,
        detector_config,
        phase,
        split_comber=split_comber
    )

    data_loader = DataLoader(
        dataset,
        batch_size=1,
        shuffle=False,
        num_workers=0,
        pin_memory=True,
        collate_fn=collate
    )

    start_time = time.time()
    net.eval()
    split_comber = data_loader.dataset.split_comber
    for i_name, (data, target, coord, nzhw) in enumerate(data_loader):
        target = [np.asarray(t, np.float32) for t in target]
        lbb = target[0]
        nzhw = nzhw[0]
        shortname = data_loader.dataset.filenames[i_name].split('-')[0].split('/')[-2]

        os.makedirs(os.path.join(save_dir, shortname), exist_ok=True)

        log.info("Processing %s" % shortname)

        data = data[0][0]
        coord = coord[0][0]
        isfeat = False
        if 'output_feature' in detector_config:
            if detector_config['output_feature']:
                isfeat = True

        splitlist = range(0, len(data) + 1, n_gpu)
        if splitlist[-1] != len(data):
            splitlist.append(len(data))
        outputlist = []
        featurelist = []

        for i in range(len(splitlist) - 1):
            torch.no_grad()
            inputdata = Variable(data[splitlist[i]:splitlist[i + 1]])
            input = inputdata.cuda()
            log.debug("Input size: %s" % str(input.size()))
            inputcoorddata = Variable(coord[splitlist[i]:splitlist[i + 1]])

            inputcoord = inputcoorddata.cuda()
            log.debug("Inputcoord size: %s" % str(inputcoord.size()))

            if isfeat:
                output, feature = net(input, inputcoord)
                featurelist.append(feature.data.cpu().numpy())
            else:
                torch.cuda.empty_cache()
                output = net(input, inputcoord).data.cpu().numpy()

            outputlist.append(output)

        output = np.concatenate(outputlist, 0)
        output = split_comber.combine(output, nzhw=nzhw)
        if isfeat:
            feature = np.concatenate(featurelist, 0).transpose([0, 2, 3, 4, 1])[:, :, :, :, :, np.newaxis]
            feature = split_comber.combine(feature, sidelen)[..., 0]

        thresh = -3
        pbb, mask = get_pbb(output, thresh, ismask=True)
        if isfeat:
            feature_selected = feature[mask[0], mask[1], mask[2]]
            np.save(os.path.join(save_dir, shortname + '_feature.npy'), feature_selected)
        # tp,fp,fn,_ = acc(pbb,lbb,0,0.1,0.1)
        # print([len(tp),len(fp),len(fn)])

        pbb = pbb[pbb[:, 4].argsort()[::-1]]

        np.save(os.path.join(save_dir, shortname, '_pbb.npy'), pbb)
        np.save(os.path.join(save_dir, shortname, '_lbb.npy'), lbb)
    end_time = time.time()

    log.info('elapsed time is %3.2f seconds' % (end_time - start_time))
