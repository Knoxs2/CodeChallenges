#! /bin/sh bash

set -oueE pipefail
read x y <<< $(xargs)

echo $((x + y))
echo $((x - y))
echo $((x * y))
echo $((x / y))

