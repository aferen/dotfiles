alias cd..='cd ..'
alias cd...='cd ../..'
alias ls='ls --color'
alias l='ls -lF'
alias dir='ls'
alias la='ls -lah'
alias ll='ls -l'
alias ls-l='ls -l'
alias j='jobs'
alias time='gtime --format "$(tput setab 255)$(tput setaf 160)took %es.$(tput sgr0)"'
alias vi='vim'
alias grep='grep -E --color'
alias ping='ping -c 3'
alias pstree='pstree -w'
alias c='pbcopy'
alias p='pbpaste'
alias pt='pbpaste | tee'
alias t='tee'
alias slp='/System/Library/CoreServices/"Menu Extras"/User.menu/Contents/Resources/CGSession -suspend'
alias bd='bg && disown %1'
alias pg='ps ax | grep -v "grep" | grep'
alias o='less'
alias no='yes n'
alias cl='clear;clear'
alias page='less -S'
alias start=open
alias ccat='ccat --bg=dark'
alias c.='code .'
alias code.='code .'
alias fd='fd --no-ignore'
alias ag='ag --hidden'

# cloud stuff
alias d='docker'
alias dr='docker run --rm -i -t'
alias drb='docker run --rm -i -t --entrypoint sh'
alias drr='docker run --rm -i -t -p 8080:8080 -e PORT=8080'
alias dx='docker exec -i -t'
alias db='docker build -t'

#custom alias
alias ws="cd ~/workspace"
alias performance="echo performance | sudo tee /sys/devices/system/cpu/cpu*/cpufreq/scaling_governor"
alias mic="while sleep 0.1; do pacmd set-source-volume alsa_input.pci-0000_00_1b.0.analog-stereo 15000; done"
alias pbcopy='xclip -selection clipboard'
alias pbpaste='xclip -selection clipboard -o'
alias clock='tty-clock -s -c -b -C 4 -f %d/%m/%Y'
alias k=kubectl
complete -o default -F __start_kubectl k