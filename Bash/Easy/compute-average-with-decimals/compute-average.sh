#! /bin/sh bash

set -oeuE pipefail

read -r NUMBER_INTEGER;
result=0

while read -r rest || [ -n "$rest" ]; do
    result=$(($result + $rest))
done

final_value=$(echo "scale=10; $result/$NUMBER_INTEGER" | bc)

printf "%.3f" $final_value   