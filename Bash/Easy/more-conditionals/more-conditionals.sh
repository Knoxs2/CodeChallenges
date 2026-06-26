#! /bin/sh bash

set -oeuE pipefail

read x y z <<< $(xargs)

if [[ $x == $y && $x == $z ]]; then printf "EQUILATERAL";
elif [[ $x == $y || $x == $z || $y == $z ]]; then 
    printf "ISOSCELES";
else printf "SCALENE";
fi