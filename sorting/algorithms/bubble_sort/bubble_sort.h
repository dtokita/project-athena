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
    int sort();
    int printResults();
};

#endif
