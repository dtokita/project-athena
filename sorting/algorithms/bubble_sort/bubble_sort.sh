#!/bin/bash

for (( i=1; i<1000000; i=i*10 ))
do
  ./bubble_sort $i >> result.txt
done
