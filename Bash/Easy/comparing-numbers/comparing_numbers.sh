#!/bin/sh bash

set -oeuE pipefail
read x y <<< $(xargs)

if [[ $x -gt $y ]]; then printf "X is greater than Y";
elif [[ $x -eq $y ]]; then printf "X is equal to Y";
elif [[ $x -lt $y ]]; then printf "X is less than Y";
fi
