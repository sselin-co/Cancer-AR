import pydicom as dicom


def dicom_to_dict(ds):
    """Turn a pydicom Dataset into a dict with keys derived from the Element keywords.

    Parameters
    ----------
    ds : pydicom.dataset.Dataset
        The Dataset to dictify

    Returns
    -------
    output : dict
    """
    output = dict()
    for elem in ds:
        if "Name" in elem.keyword or elem.keyword == '' or elem.keyword == 'PixelData':
            continue
        if elem.VR != 'SQ':
            if isinstance(elem.value, dicom.multival.MultiValue):
                output[elem.keyword] = list(elem.value)
            else:
                output[elem.keyword] = elem.value
        else:
            output[elem.keyword] = [dicom_to_dict(item) for item in elem]
    return output


def dict_intersection(dict_list):
    parsed_dicts = []
    common_dict = {}
    for d in dict_list:
        nd = {}
        for key, val in d.items():
            if key in common_dict.keys():
                continue
            common = True
            for e in dict_list:
                if e.get(key) != val:
                    common = False
            if not common:
                nd[key] = val
            else:
                common_dict[key] = val
        parsed_dicts.append(nd)
    return common_dict, parsed_dicts


def get_metadata_dict(scans):
    common_dict, parsed_dicts = dict_intersection([dicom_to_dict(d) for d in scans])
    return common_dict
