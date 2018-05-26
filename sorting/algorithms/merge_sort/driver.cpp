#include <iostream>
#include <string>
#include "merge_sort.h"

//#define DEBUG

int main(int argc, char *argv[]) {
  int vector_size = 16;
  int mode = 0;

  if (argc > 2) {
    vector_size = std::stoi(argv[1]);
    mode = std::stoi(argv[2]);
  }

  MergeSort *ms = new MergeSort(vector_size);
  ms->createVectors();

  #ifdef DEBUG
  ms->printVectors();
  #endif

  if (mode == 0) ms->sortAll();
  else if (mode == 1) ms->sortRandom();
  else if (mode == 2) ms->sortAscending();
  else if (mode == 3) ms->sortDescending();
  else std::cout << "Unrecognized mode." << std::endl, exit(-1);

  #ifdef DEBUG
  ms->printVectors();
  #endif

  if (mode == 0) ms->printAllResults();
  else if (mode == 1) ms->printRandomResults();
  else if (mode == 2) ms->printAscendingResults();
  else if (mode == 3) ms->printDescendingResults();

}
