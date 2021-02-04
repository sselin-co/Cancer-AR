import json
import logging
import os

import cv2
import numpy as np
import torch
from math import ceil, floor
from skimage import morphology

from config import get_config
from detector import detect
from layers import iou
from preprocessing.full_prep import full_prep, write_obj
from matplotlib import pyplot as plt

logging.basicConfig()
logging.getLogger().setLevel(logging.INFO)
log = logging.getLogger(__name__)

cfg = get_config("LOCAL")

torch.cuda.set_device(0)

os.makedirs(cfg['result_path'], exist_ok=True)

prep_result_path = cfg['result_path']
skip_detect = cfg.getboolean('skip_detect', False)

###
# Preprocessing
###
if not cfg.getboolean("skip_preprocessing", False):
    full_prep(
        cfg.get('datapath'),
        cfg.get('result_path'),
        cfg.getint('n_worker_preprocessing')
    )


###
# Divide the shell from the inside
###
# for d in os.listdir(cfg.get('result_path')):
#
#     filepath = os.path.join(cfg.get('result_path'), d, "_model.npy")
#     data = np.load(filepath)
#     inside = np.zeros(data.shape, 'uint8')
#     for i in range(data.shape[0]):
#         slice = data[i, :, :].astype('uint8')
#
#         imslice = 255 - slice
#         imslice = cv2.threshold(imslice, 115, 255, cv2.THRESH_BINARY)[1]
#         imslice = cv2.morphologyEx(
#             imslice,
#             cv2.MORPH_CLOSE,
#             morphology.disk(10),
#             borderType=cv2.BORDER_CONSTANT,
#             borderValue=0
#         )
#         imslice = cv2.morphologyEx(
#             imslice,
#             cv2.MORPH_ERODE,
#             morphology.disk(10),
#             borderType=cv2.BORDER_CONSTANT,
#             borderValue=0
#         )
#         slice[np.where(imslice == 0)] = 0
#         slice = cv2.threshold(slice, 30, 255, cv2.THRESH_TOZERO)[1]
#
#         inside[i, :, :] = slice
#
#     logging.info("Writing %s" % os.path.join(cfg.get('result_path'), d, "inside.obj"))
#     write_obj(os.path.join(cfg.get('result_path'), d, "inside.obj"), inside)
#     np.save(os.path.join(cfg.get('result_path'), d, "inside"), inside)
#
#     shell = data - inside
#
#     logging.info("Writing %s" % os.path.join(cfg.get('result_path'), d, "shell.obj"))
#     write_obj(os.path.join(cfg.get('result_path'), d, "shell.obj"), shell)
#     np.save(os.path.join(cfg.get('result_path'), d, "_shell"), shell)

testsplit = [d + "/" for d in os.listdir(prep_result_path)]

###
# Detection
###
if not skip_detect:
    detect.detect(
        testsplit,
        cfg.get('result_path'),
        n_gpu=cfg.getint('n_gpu'),
        phase='test'
    )


def nms(output, iou_th):
    if len(output) == 0:
        return output

    output = output[np.argsort(-output[:, 0])]
    bboxes = [output[0]]

    for i in np.arange(1, len(output)):
        bbox = output[i]
        flag = 1
        for j in range(len(bboxes)):
            if iou(bbox[1:5], bboxes[j][1:5]) >= iou_th:
                flag = -1
                break
        if flag == 1:
            bboxes.append(bbox)

    bboxes = np.asarray(bboxes, np.float32)
    return bboxes


def crop_nodule(img, target, fillvalue=0):
    # radius = ceil(abs(target[0])) * 2
    radius = 40

    start = np.round(target[1:4] - radius / 2).astype('int')

    pad = []
    for i in range(3):
        if start[i] < 0:
            leftpad = -start[i]
            start[i] = 0
        else:
            leftpad = 0
        if start[i] + radius > img.shape[i]:
            rightpad = start[i] + radius - img.shape[i]
        else:
            rightpad = 0
        pad.append([leftpad, rightpad])

    img = 255 - img
    img = np.pad(img, pad, 'constant', constant_values=fillvalue)
    img[np.where(img < 180)] = 0

    crop = img[
               start[0]:start[0] + radius,
               start[1]:start[1] + radius,
               start[2]:start[2] + radius
           ]

    coord = (start, ceil(abs(target[0])))

    return crop, coord


###
# Extract Nodules
###
for d in os.listdir(cfg.get('result_path')):
    pbbfile = os.path.join(cfg.get('result_path'), d, '_pbb.npy')

    pbb_list = np.load(pbbfile)
    pbb_list = nms(pbb_list, cfg.getfloat('iou_th'))
    pbb_list = pbb_list[pbb_list[:, 4] >= cfg.getfloat('prob_th')]
    pbb_list = pbb_list[np.ceil(np.abs(pbb_list[:, 0])) >= cfg.getint('radius_th')]

    img = np.load(os.path.join(cfg.get('result_path'), d, '_clean.npy'))[0, :, :, :]

    nodule_info = []
    for i, pbb in enumerate(pbb_list):
        nodule, coord = crop_nodule(img, pbb[0:4], cfg.getfloat("filling_value"))
        if nodule is None or coord is None:
            continue

        if np.max(nodule) == 0:
            log.warning("No pixels found for nodule %s" % i)
            continue

        nodule_info.append({
            "centroid": coord[0].tolist(),
            "radius": int(coord[1]),
            "probability": float(pbb[4])
        })

        logging.info("Writing %s" % os.path.join(cfg.get('result_path'), "nodule_%s.obj" % i))
        write_obj(os.path.join(cfg.get('result_path'), d, "nodule_%s.obj" % i), nodule)
        np.save(os.path.join(cfg.get('result_path'), d, "nodule_%s" % i), nodule)

    logging.info("Writing %s" % os.path.join(cfg.get('result_path'), d, "nodules.json"))
    with open(os.path.join(cfg.get('result_path'), d, "nodules.json"), "w") as f:
        f.write(json.dumps(nodule_info, indent=4, sort_keys=True))

