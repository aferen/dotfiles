#!/bin/bash -eu


case "$(uname -s)" in
    Darwin)
        if [[ ! -x /usr/local/bin/brew ]]; then
          echo "[i] Install Homebrew"
          /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
        fi

        if [[ ! -x /usr/local/bin/git ]]; then
            echo "[i] Install Git"
            brew install git
        fi
        ;;

    Linux)
        if [ -f /etc/os-release ]
            then
                . /etc/os-release

                case "$ID" in
                    debian | ubuntu)
                        if [[ ! -x /usr/bin/git ]]; then
                            echo "[i] Install Git"
                            sudo apt-get install -y git
                        fi
                        ;;
                    *)
                        echo "[!] Unsupported Linux Distribution: $ID"
                        exit 1
                        ;;
                esac
            else
                echo "[!] Unsupported Linux Distribution"
                exit 1
            fi
        ;;

    *)
        echo "[!] Unsupported OS"
        exit 1
        ;;
esac

git clone -b master https://github.com/aferen/dotfiles ~/.local/share/.dotfiles
~/.local/share/.dotfiles/setup.sh