#include <iostream>
#include <string>
#include "bubble_sort.h"

//#define DEBUG

int main(int argc, char *argv[]) {
  int vector_size = 50;
  int mode = 0;

  if (argc > 2) {
    vector_size = std::stoi(argv[1]);
    mode = std::stoi(argv[2]);
  }

  BubbleSort *bs = new BubbleSort(vector_size);
  bs->createVectors();

  #ifdef DEBUG
  bs->printVectors();
  #endif

  if (mode == 0) bs->sortAll();
  else if (mode == 1) bs->sortRandom();
  else if (mode == 2) bs->sortAscending();
  else if (mode == 3) bs->sortDescending();
  else std::cout << "Unrecognized mode." << std::endl, exit(-1);

  #ifdef DEBUG
  bs->printVectors();
  #endif

  if (mode == 0) bs->printAllResults();
  else if (mode == 1) bs->printRandomResults();
  else if (mode == 2) bs->printAscendingResults();
  else if (mode == 3) bs->printDescendingResults();

}
