#!/usr/bin/env bash

set -euo pipefail

TERRAFORM_VERSION=0.11.13

CURRENT_DIR="$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )"
if [[ -z "$CURRENT_DIR" ]]; then
    CURRENT_DIR="/"
fi

"$CURRENT_DIR/go.sh"

if command -v terraform >/dev/null; then
    INSTALLED_VERSION="$(set +euo pipefail && terraform version | head -1)"
    if  ! echo "$INSTALLED_VERSION" | grep -q "$TERRAFORM_VERSION"; then
        echo "Removing old version $INSTALLED_VERSION"
        sudo rm -rf /usr/local/bin/terraform
    else
        echo "$INSTALLED_VERSION already installed."
    fi
fi

if ! command -v terraform; then
    gpg --keyserver keyserver.ubuntu.com --recv 51852D87348FFC4C
    if ! gpg --fingerprint "51852D87348FFC4C" | grep "91A6 E7F8 5D05 C656 30BE  F189 5185 2D87 348F FC4C"; then
        (>&2 echo "Incorrect fingerprint for key!")
        exit 1
    fi
    curl -Os "https://releases.hashicorp.com/terraform/${TERRAFORM_VERSION}/terraform_${TERRAFORM_VERSION}_linux_amd64.zip"
    curl -Os "https://releases.hashicorp.com/terraform/${TERRAFORM_VERSION}/terraform_${TERRAFORM_VERSION}_SHA256SUMS"
    curl -Os "https://releases.hashicorp.com/terraform/${TERRAFORM_VERSION}/terraform_${TERRAFORM_VERSION}_SHA256SUMS.sig"
    gpg --verify "terraform_${TERRAFORM_VERSION}_SHA256SUMS.sig" "terraform_${TERRAFORM_VERSION}_SHA256SUMS"
    if [[ "$(grep terraform_${TERRAFORM_VERSION}_linux_amd64.zip terraform_${TERRAFORM_VERSION}_SHA256SUMS | cut -d ' ' -f 1)" != "$(sha256sum terraform_${TERRAFORM_VERSION}_linux_amd64.zip | cut -d ' ' -f 1)" ]]; then
        (>&2 echo "shasums don't match!")
        exit 1
    fi

    unzip terraform_${TERRAFORM_VERSION}_linux_amd64.zip

    chmod a+x terraform
    sudo mv terraform /usr/local/bin/terraform
    echo "terraform installed!"

    rm "terraform_${TERRAFORM_VERSION}_"*
fi
