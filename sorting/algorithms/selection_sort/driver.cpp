#include <iostream>
#include <string>
#include "selection_sort.h"

//#define DEBUG

int main(int argc, char *argv[]) {
  int vector_size = 50;
  int mode = 0;

  if (argc > 2) {
    vector_size = std::stoi(argv[1]);
    mode = std::stoi(argv[2]);
  }

  SelectionSort *ss = new SelectionSort(vector_size);
  ss->createVectors();

  #ifdef DEBUG
  ss->printVectors();
  #endif

  if (mode == 0) ss->sortAll();
  else if (mode == 1) ss->sortRandom();
  else if (mode == 2) ss->sortAscending();
  else if (mode == 3) ss->sortDescending();
  else std::cout << "Unrecognized mode." << std::endl, exit(-1);

  #ifdef DEBUG
  ss->printVectors();
  #endif

  if (mode == 0) ss->printAllResults();
  else if (mode == 1) ss->printRandomResults();
  else if (mode == 2) ss->printAscendingResults();
  else if (mode == 3) ss->printDescendingResults();

}
