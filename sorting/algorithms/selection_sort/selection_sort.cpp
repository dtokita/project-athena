#include <iostream>
#include <limits.h>
#include "selection_sort.h"

SelectionSort::SelectionSort(int vector_size) : SortingAlgorithm(vector_size) {

}

SelectionSort::~SelectionSort() {

}

int SelectionSort::sortVector(std::vector<int> *vector) {
  for (int i = 0; i < vector->size(); i++) {
    int key = INT_MAX;
    int index = 0;

    // Finds the smallest value in the unsorted portion of vector
    for (int j = i; j < vector->size(); j++) {
      if (vector->at(j) < key) {
        key = vector->at(j);
        index = j;
      }
    }

    // Swap the smallest element with the leftmost element of the unsorted list
    int temp = vector->at(i);
    vector->at(i) = vector->at(index);
    vector->at(index) = temp;
  }

  return 0;
}

int SelectionSort::createDataStructure() {
  return 0;
}

int SelectionSort::sort() {
  std::cout << "Selection Sorting..." << std::endl << std::endl;

  rt1 = startTime();
  sortVector(rvector);
  rt2 = endTime();

  at1 = startTime();
  sortVector(avector);
  at2 = endTime();

  dt1 = startTime();
  sortVector(dvector);
  dt2 = endTime();

  return 0;
}

int SelectionSort::printResults() {
  using namespace std::chrono;

  auto r_tspan = duration_cast<microseconds>(rt2 - rt1);
  auto a_tspan = duration_cast<microseconds>(at2 - at1);
  auto d_tspan = duration_cast<microseconds>(dt2 - dt1);

  std::cout << "Vector Size: " << rvector->size() << std::endl;
  std::cout << "Random Sort Time: " << r_tspan.count() << " microseconds." << std::endl;
  std::cout << "Ascending Sort Time: " << a_tspan.count() << " microseconds." << std::endl;
  std::cout << "Descending Sort Time: " << d_tspan.count() << " microseconds." << std::endl << std::endl;

  return 0;
}
