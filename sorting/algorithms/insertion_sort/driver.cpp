#include <iostream>
#include <string>
#include "insertion_sort.h"

//#define DEBUG

int main(int argc, char *argv[]) {
  int vector_size = 50;
  int mode = 0;

  if (argc > 2) {
    vector_size = std::stoi(argv[1]);
    mode = std::stoi(argv[2]);
  }

  InsertionSort *is = new InsertionSort(vector_size);
  is->createVectors();

  #ifdef DEBUG
  is->printVectors();
  #endif

  if (mode == 0) is->sortAll();
  else if (mode == 1) is->sortRandom();
  else if (mode == 2) is->sortAscending();
  else if (mode == 3) is->sortDescending();
  else std::cout << "Unrecognized mode." << std::endl, exit(-1);

  #ifdef DEBUG
  is->printVectors();
  #endif

  if (mode == 0) is->printAllResults();
  else if (mode == 1) is->printRandomResults();
  else if (mode == 2) is->printAscendingResults();
  else if (mode == 3) is->printDescendingResults();

}
