import pynvml


def _getFreeRatio(id):
    handle = pynvml.nvmlDeviceGetHandleByIndex(id)
    use = pynvml.nvmlDeviceGetUtilizationRates(handle)
    ratio = 0.5 * (float(use.gpu + float(use.memory)))
    return ratio


def getFreeId():


    pynvml.nvmlInit()

    deviceCount = pynvml.nvmlDeviceGetCount()
    available = []
    for i in range(deviceCount):
        if _getFreeRatio(i) < 70:
            available.append(i)
    gpus = ''
    for g in available:
        gpus = gpus + str(g) + ','
    gpus = gpus[:-1]
    return gpus
