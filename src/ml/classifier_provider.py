from classifier import net_classifier as nodmodel
from torch.nn import DataParallel
import torch
from config import get_config
cfg = get_config("LOCAL")


def provide():
    config1, nod_net = nodmodel.get_model()
    checkpoint = torch.load(cfg['classifier_param'])
    nod_net.load_state_dict(checkpoint)

    nod_net = nod_net.eval()
    nod_net = nod_net.cuda()
    nod_net = DataParallel(nod_net, output_device=-1)
    return config1, nod_net
