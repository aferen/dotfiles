#!/bin/bash -eux

git clone -b master https://github.com/aferen/dotfiles ~/.dotfiles
echo test
~/.dotfiles/setup.sh