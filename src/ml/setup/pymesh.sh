#!/usr/bin/env bash

set -euo pipefail

source ../venv/bin/activate

CURRENT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
cd "$CURRENT_DIR/.."

sudo apt purge --auto-remove cmake

if ! $(command -v cmake); then
    sudo apt-get install -y build-essential
    if [[ ! -f cmake-3.13.3-Linux-x86_64.sh ]]; then
        wget https://cmake.org/files/v3.13/cmake-3.13.3-Linux-x86_64.sh
    fi
    sudo /bin/bash cmake-3.13.3-Linux-x86_64.sh --prefix=/usr/local/ --skip-license
    rm cmake-3.13.3-Linux-x86_64.sh
fi

sudo apt-get -y install \
    libeigen3-dev \
    libgmp-dev \
    libgmpxx4ldbl \
    libmpfr-dev \
    libboost-dev \
    libboost-thread-dev \
    libtbb-dev \
    python3-dev \
    swig

git clone https://github.com/PyMesh/PyMesh.git
cd PyMesh
git submodule update --init
export PYMESH_PATH=`pwd`

python setup.py build
python setup.py install
