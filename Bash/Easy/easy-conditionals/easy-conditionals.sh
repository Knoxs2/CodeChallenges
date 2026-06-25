#! /bin/sh Bash

set -oeuE pipefail

read character <<< $(xargs)

if [[ $character == [y/Y] ]]; then printf "YES";
elif [[ $character == [n/N] ]]; then printf "NO";
fi
