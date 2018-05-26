#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include "../../sorting_algorithm.h"

class BubbleSort : public SortingAlgorithm {
  private:
    int sortVector(std::vector<int> *vector);

  public:
    BubbleSort(int vector_size);
    ~BubbleSort();

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
