#!/usr/bin/env bash

find . -name '*.dcm' | parallel --eta mogrify -format jpg -quality 100 {}