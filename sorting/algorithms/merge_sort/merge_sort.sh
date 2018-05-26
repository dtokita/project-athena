#!/bin/bash

if [ -z "$1" ]
then
  echo "Usage: 0 = All, 1 = Random, 2 = Ascending, 3 = Descending"
  exit 0
fi

for (( i=1; i<1000000000; i=i*2 ))
do
  echo "Vector Size $i"
  ./merge_sort $i $1 >> result.txt
done
