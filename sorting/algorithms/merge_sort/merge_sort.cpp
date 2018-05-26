#include <iostream>
#include <limits.h>
#include "merge_sort.h"

MergeSort::MergeSort(int vector_size) : SortingAlgorithm(vector_size) {

}

MergeSort::~MergeSort() {

}

int MergeSort::sortVector(std::vector<int> *vector) {
  temp.resize(vector->size());
  splitVector(vector, 0, vector->size() - 1);

  return 0;
}

int MergeSort::mergeVector(std::vector<int> *vector, int low, int mid, int high) {
  int left_index = low;
  int right_index = mid + 1;
  int index = left_index;

  while (left_index <= mid && right_index <= high) {
    if (vector->at(left_index) <= vector->at(right_index)) {
      temp.at(index) = vector->at(left_index);
      left_index++;
    } else {
      temp.at(index) = vector->at(right_index);
      right_index++;
    }
    index++;
  }

  while (left_index <= mid) {
    temp[index] = vector->at(left_index);
    left_index++;
    index++;
  }

  while (right_index <= high) {
    temp[index] = vector->at(right_index);
    right_index++;
    index++;
  }

  for (int i = low; i <= high; i++) {
    vector->at(i) = temp[i];
  }

  return 0;
}

int MergeSort::splitVector(std::vector<int> *vector, int low, int high) {
  if (low < high) {
    splitVector(vector, low, (low + high) / 2);
    splitVector(vector, ((low + high) / 2) + 1, high);

    mergeVector(vector, low, (low + high) / 2, high);

    return 0;
  } else {
    return 0;
  }
}

int MergeSort::createDataStructure() {
  return 0;
}

int MergeSort::sortAll() {
  std::cout << "Merge Sorting..." << std::endl << std::endl;

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

int MergeSort::sortRandom() {
  rt1 = startTime();
  sortVector(rvector);
  rt2 = endTime();

  return 0;
}

int MergeSort::sortAscending() {
  at1 = startTime();
  sortVector(avector);
  at2 = endTime();

  return 0;
}

int MergeSort::sortDescending() {
  dt1 = startTime();
  sortVector(dvector);
  dt2 = endTime();

  return 0;
}

int MergeSort::printAllResults() {
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

int MergeSort::printRandomResults() {
  using namespace std::chrono;

  auto r_tspan = duration_cast<microseconds>(rt2 - rt1);
  std::cout << r_tspan.count() << " - Vector Size: " << rvector->size() << std::endl;

  return 0;
}

int MergeSort::printAscendingResults() {
  using namespace std::chrono;

  auto a_tspan = duration_cast<microseconds>(at2 - at1);
  std::cout << a_tspan.count() << " - Vector Size: " << avector->size() << std::endl;

  return 0;
}

int MergeSort::printDescendingResults() {
  using namespace std::chrono;

  auto d_tspan = duration_cast<microseconds>(dt2 - dt1);
  std::cout << d_tspan.count() << " - Vector Size: " << dvector->size() << std::endl;

  return 0;
}
