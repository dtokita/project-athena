#include <iostream>
#include <string>
#include "bubble_sort.h"

//#define DEBUG

int main(int argc, char *argv[]) {
  int vector_size = 50;

  if (argc > 1) {
    vector_size = std::stoi(argv[1]);
  }

  BubbleSort *bs = new BubbleSort(vector_size);
  bs->createVectors();

  #ifdef DEBUG
  bs->printVectors();
  #endif

  bs->sort();

  #ifdef DEBUG
  bs->printVectors();
  #endif

  bs->printResults();
}
