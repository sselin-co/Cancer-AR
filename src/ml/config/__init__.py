import configparser
import json
import os

config = configparser.ConfigParser()
script_dir = os.path.dirname(__file__)


def get_config(env: str = 'DEFAULT'):
    with open(os.path.join(script_dir, 'config.default.json')) as json_data:
        config['DEFAULT'] = json.load(json_data)

    if env != 'DEFAULT':
        overridefile = os.path.join(script_dir, '..', 'config.%s.json' % env.lower())
        if os.path.isfile(overridefile):
            with open(overridefile) as json_data:
                config[env] = {**config['DEFAULT'], **json.load(json_data)}
        else:
            config[env] = config['DEFAULT']

    return config[env]
