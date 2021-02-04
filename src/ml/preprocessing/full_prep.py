import json
import logging
import os

import numpy as np
import pydicom as dicom
import pymesh
from skimage import measure

from preprocessing.metadata import get_metadata_dict
from preprocessing.step1 import step1_python
from preprocessing.step2 import step2_python
import shutil

logging.basicConfig()
logging.getLogger().setLevel(logging.INFO)
log = logging.getLogger(__name__)

OUTPUT_PATH = ""


def load_scan(path):
    slices = [dicom.read_file(path + '/' + s) for s in os.listdir(path) if s.endswith(".dcm")]
    slices.sort(key=lambda x: float(x.ImagePositionPatient[2]))
    if slices[0].ImagePositionPatient[2] == slices[1].ImagePositionPatient[2]:
        sec_num = 2

        while slices[0].ImagePositionPatient[2] == slices[sec_num].ImagePositionPatient[2]:
            sec_num = sec_num + 1

        slice_num = int(len(slices) / sec_num)
        slices.sort(key=lambda x: float(x.InstanceNumber))
        slices = slices[0:slice_num]
        slices.sort(key=lambda x: float(x.ImagePositionPatient[2]))
    try:
        slice_thickness = np.abs(slices[0].ImagePositionPatient[2] - slices[1].ImagePositionPatient[2])
    except:
        slice_thickness = np.abs(slices[0].SliceLocation - slices[1].SliceLocation)

    for s in slices:
        s.SliceThickness = slice_thickness

    return slices


def write_obj(path: str, image: np.ndarray):
    vertices, faces, normals, values = measure.marching_cubes_lewiner(image)
    mesh = pymesh.form_mesh(vertices, faces)
    mesh, info = pymesh.remove_isolated_vertices(mesh)
    mesh, info = pymesh.remove_duplicated_faces(mesh)
    pymesh.save_mesh(path, mesh)


def savenpy(data_path, use_existing=True):
    global OUTPUT_PATH

    scans = load_scan(data_path)

    metadata = get_metadata_dict(scans)
    tag = metadata.get("SeriesInstanceUID")

    if use_existing:
        if os.path.exists(os.path.join(OUTPUT_PATH, tag, '_label.npy')) and os.path.exists(
                os.path.join(OUTPUT_PATH, tag, '_clean.npy')):
            logging.info('%s had been done' % tag)
            return

    im, m1, m2, spacing = step1_python(scans)

    sliceim = step2_python(im, m1, m2, spacing, np.array([1, 1, 1]))

    os.makedirs(os.path.join(OUTPUT_PATH, tag))

    np.save(os.path.join(OUTPUT_PATH, tag, '_clean'), sliceim)

    sliceim = sliceim[0, :, :, :]
    sliceim = sliceim.transpose(1, 0, 2)
    sliceim = np.flipud(sliceim)

    np.save(os.path.join(OUTPUT_PATH, tag, '_model'), sliceim)
    np.save(os.path.join(OUTPUT_PATH, tag, '_label'), np.array([[0, 0, 0, 0]]))

    logging.info("Writing %s" % os.path.join(OUTPUT_PATH, tag, "info.json"))
    with open(os.path.join(OUTPUT_PATH, tag, "info.json"), "w") as f:
        f.write(json.dumps(metadata, indent=4, sort_keys=True))

    logging.info("Writing %s" % os.path.join(OUTPUT_PATH, tag, "model.obj"))
    write_obj(os.path.join(OUTPUT_PATH, tag, "model.obj"), sliceim)

    logging.info('%s done' % tag)


def find_patients(path):
    patients = []

    for root, subFolders, files in os.walk(path):
        log.info("Checking %s" % root)
        images = [f for f in files if f.endswith(".dcm")]
        if images:
            i = dicom.read_file(os.path.join(root, images[0]))
            if i.pixel_array.shape == (512, 512):
                log.info("Adding %s" % root)
                patients.append(root)

    patients.sort()
    return patients


def full_prep(data_path: str, prep_folder: str, n_worker: int, use_existing=True):
    global OUTPUT_PATH

    log.info("Starting Pre-Processing")

    OUTPUT_PATH = prep_folder

    if not use_existing:
        shutil.rmtree(prep_folder)
        os.makedirs(prep_folder)

    patients = find_patients(data_path)[:2]

    for patient in patients:
        savenpy(patient, use_existing)

    logging.info('end preprocessing')
