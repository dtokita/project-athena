#include <iostream>
#include "insertion_sort.h"

InsertionSort::InsertionSort(int vector_size) : SortingAlgorithm(vector_size) {

}

InsertionSort::~InsertionSort() {

}

int InsertionSort::sortVector(std::vector<int> *vector) {
  for (int i = 0; i < vector->size(); i++) {
    if (i == 0) continue;

    int key = vector->at(i), j = i - 1;

    while (j >= 0 && vector->at(j) > key) {
      vector->at(j + 1) = vector->at(j);
      j--;
    }
    
    vector->at(j + 1) = key;
  }

  return 0;
}

int InsertionSort::createDataStructure() {
  return 0;
}

int InsertionSort::sort() {
  std::cout << "Insertion Sorting..." << std::endl << std::endl;

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

int InsertionSort::printResults() {
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
