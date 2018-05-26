#!/bin/bash

for (( i=1; i<1000000000; i=i*2 ))
do
  echo "Vector Size $i"
  ./selection_sort $i >> result.txt
done
