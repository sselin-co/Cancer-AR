import os

from utils import getFreeId


def setgpu(gpuinput):
    freeids = getFreeId()
    if gpuinput == 'all':
        gpus = freeids
    else:
        gpus = gpuinput
        if any([g not in freeids for g in gpus.split(',')]):
            raise ValueError('gpu is being used')
    print('using gpu ' + gpus)
    os.environ['CUDA_VISIBLE_DEVICES'] = gpus
    return len(gpus.split(','))
