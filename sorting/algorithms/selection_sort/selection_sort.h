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
    int sort();
    int printResults();
};

#endif
