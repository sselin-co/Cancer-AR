#!/usr/bin/env bash

set -euo pipefail

CURRENT_DIR="$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )"
if [[ -z "$CURRENT_DIR" ]]; then
    CURRENT_DIR="/"
fi

GO_VERSION=1.11

if command -v go >/dev/null; then
    if ! go version | grep -q "$GO_VERSION"; then
        echo "Removing old version $(go version)"
        sudo rm -rf /usr/local/go
    else
        echo "$(go version) already installed."
        exit 0
    fi
fi

if ! command -v go >/dev/null; then
    echo "Downloading GO from https://dl.google.com/go/go$GO_VERSION.linux-amd64.tar.gz"
    wget -qO- "https://dl.google.com/go/go$GO_VERSION.linux-amd64.tar.gz" | sudo tar -C /usr/local -xzf-
    if ! grep 'export PATH=$PATH:/usr/local/go/bin' ~/.bashrc > /dev/null; then
        echo 'export PATH=$PATH:/usr/local/go/bin' >> ~/.bashrc;
    fi

    if [[ -f ~/.zshrc ]] && ! grep 'export PATH=$PATH:/usr/local/go/bin' ~/.zshrc > /dev/null; then
        echo 'export PATH=$PATH:/usr/local/go/bin' >> ~/.zshrc;
    fi
    source ~/.bashrc;
fi
