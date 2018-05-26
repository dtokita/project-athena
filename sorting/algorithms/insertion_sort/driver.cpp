#include <iostream>
#include <string>
#include "insertion_sort.h"

//#define DEBUG

int main(int argc, char *argv[]) {
  int vector_size = 50;

  if (argc > 1) {
    vector_size = std::stoi(argv[1]);
  }

  InsertionSort *is = new InsertionSort(vector_size);
  is->createVectors();

  #ifdef DEBUG
  is->printVectors();
  #endif

  is->sort();

  #ifdef DEBUG
  is->printVectors();
  #endif

  is->printResults();
}
