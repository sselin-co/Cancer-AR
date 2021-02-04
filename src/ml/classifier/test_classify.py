from torch.autograd import Variable
import numpy as np


def test_classify(data_loader, model):
    model.eval()
    predlist = []

    for i, (x, coord) in enumerate(data_loader):
        coord = Variable(coord).cuda()
        x = Variable(x).cuda()
        nodulePred, casePred, _ = model(x, coord)
        predlist.append(casePred.data.cpu().numpy())

    predlist = np.concatenate(predlist)
    return predlist
