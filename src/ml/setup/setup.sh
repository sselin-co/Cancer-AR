#!/usr/bin/env bash

set -euo pipefail

CURRENT_DIR="$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )"
if [[ -z "$CURRENT_DIR" ]]; then
    CURRENT_DIR="/"
fi

sudo apt-get install -y \
    python3.7 \
    python3.7-dev \
    python3-pip \
    libopenimageio-dev \
    python-openimageio \
    libgl1-mesa-dev \
    libopenexr-dev \
    libopenjp2-7-dev

sudo snap install blender --classic
