#!/bin/bash

if [ -z "$1" ]
then
  echo "Usage: 0 = All, 1 = Random, 2 = Ascending, 3 = Descending"
  exit 0
fi

for (( i=1; i<1000000000; i=i+100 ))
do
  echo "Vector Size $i"
  ./inseriton_sort $i $1 >> pi_$1_result.txt
done
