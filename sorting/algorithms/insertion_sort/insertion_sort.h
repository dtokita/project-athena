#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "../../sorting_algorithm.h"

class InsertionSort : public SortingAlgorithm {
  private:
    int sortVector(std::vector<int> *vector);

  public:
    InsertionSort(int vector_size);
    ~InsertionSort();

    int createDataStructure();

    int sortAll();
    int sortRandom();
    int sortAscending();
    int sortDescending();

    int printAllResults();
    int printRandomResults();
    int printAscendingResults();
    int printDescendingResults();
};

#endif
