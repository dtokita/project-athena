#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include "../../sorting_algorithm.h"

class MergeSort : public SortingAlgorithm {
  private:
    std::vector<int> temp;
    int sortVector(std::vector<int> *vector);
    int mergeVector(std::vector<int> *vector, int low, int mid, int high);
    int splitVector(std::vector<int> *vector, int low, int high);

  public:
    MergeSort(int vector_size);
    ~MergeSort();

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
