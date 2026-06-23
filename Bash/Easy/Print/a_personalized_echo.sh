#!/bin/sh bash

set -oueE pipefail

name=$(</dev/stdin)

echo "Welcome" $name 
