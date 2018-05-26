#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "../../sorting_algorithm.h"

class SelectionSort : public SortingAlgorithm {
  private:
    int sortVector(std::vector<int> *vector);

  public:
    SelectionSort(int vector_size);
    ~SelectionSort();

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
