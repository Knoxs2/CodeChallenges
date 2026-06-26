#! /bin/sh bash

set -oeuE pipefail
result=$(echo "scale=5; $(xargs)" | bc)

printf "%.3f" $result 
