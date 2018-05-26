#!/bin/bash

for (( i=1; i<1000000; i=i*10 ))
do
  ./insertion_sort $i >> result.txt
done
