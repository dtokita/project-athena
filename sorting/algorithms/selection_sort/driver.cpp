#include <iostream>
#include <string>
#include "selection_sort.h"

//#define DEBUG

int main(int argc, char *argv[]) {
  int vector_size = 50;

  if (argc > 1) {
    vector_size = std::stoi(argv[1]);
  }

  SelectionSort *ss = new SelectionSort(vector_size);
  ss->createVectors();

  #ifdef DEBUG
  ss->printVectors();
  #endif

  ss->sort();

  #ifdef DEBUG
  ss->printVectors();
  #endif

  ss->printResults();
}
