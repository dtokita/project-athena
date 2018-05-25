#include <iostream>
#include "bubble_sort.h"

BubbleSort::BubbleSort(int vector_size) : SortingAlgorithm(vector_size) {

}

BubbleSort::~BubbleSort() {

}

int BubbleSort::sortVector(std::vector<int> *vector) {
  for (int i = 0; i < vector->size(); i++) {
    for (int j = 0; j < vector->size() - 1; j++) {
      if (vector->at(j + 1) < vector->at(j)) {
        int temp = vector->at(j + 1);
        vector->at(j + 1) = vector->at(j);
        vector->at(j) = temp;
      }
    }
  }

  return 0;
}

int BubbleSort::createDataStructure() {
  return 0;
}

int BubbleSort::sort() {
  std::cout << "Bubble Sorting..." << std::endl << std::endl;

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

int BubbleSort::printResults() {
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
