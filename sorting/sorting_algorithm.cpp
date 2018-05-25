#include "sorting_algorithm.h"
#include <algorithm>

SortingAlgorithm::SortingAlgorithm(int vector_size) {
  size = vector_size;
}

SortingAlgorithm::~SortingAlgorithm() {
  free(rvector);
  free(avector);
  free(dvector);
}

int SortingAlgorithm::createRandomVector() {
  static std::vector<int> random_vector;
  rvector = &random_vector;

  for (int i = 0; i < size; i++) random_vector.push_back(i);
  std::random_shuffle(random_vector.begin(), random_vector.end());

  return 0;
}

int SortingAlgorithm::createAscendingVector() {
  static std::vector<int> ascending_vector;
  avector = &ascending_vector;

  for (int i = 0; i < size; i++) ascending_vector.push_back(i);

  return 0;
}

int SortingAlgorithm::createDescendingVector() {
  static std::vector<int> descending_vector;
  dvector = &descending_vector;

  for (int i = 0; i < size; i++) descending_vector.push_back(size - i - 1);

  return 0;
}

void SortingAlgorithm::printRandomVector() {
  if (rvector->empty() == false) {
    std::cout << "Random Vector: ";

    for (int i = 0; i < rvector->size(); i++) {
      std::cout << rvector->at(i) << " ";
    }

    std::cout << std::endl;
  } else {
    std::cout << "Random Vector is empty. Call createVectors()" << std::endl;
  }
}

void SortingAlgorithm::printAscendingVector() {
  if (avector->empty() == false) {
    std::cout << "Ascending Vector: ";

    for (int i = 0; i < avector->size(); i++) {
      std::cout << avector->at(i) << " ";
    }

    std::cout << std::endl;
  } else {
    std::cout << "Ascending Vector is empty. Call createVectors()" << std::endl;
  }
}

void SortingAlgorithm::printDescendingVector() {
  if (dvector->empty() == false) {
    std::cout << "Descending Vector: ";

    for (int i = 0; i < dvector->size(); i++) {
      std::cout << dvector->at(i) << " ";
    }

    std::cout << std::endl << std::endl;
  } else {
    std::cout << "Descending Vector is empty. Call createVectors()" << std::endl;
  }
}

int SortingAlgorithm::createVectors() {
  createRandomVector();
  createAscendingVector();
  createDescendingVector();

  return 0;
}

void SortingAlgorithm::printVectors() {
  printRandomVector();
  printAscendingVector();
  printDescendingVector();
}

std::chrono::high_resolution_clock::time_point SortingAlgorithm::startTime() {
  return std::chrono::high_resolution_clock::now();
}

std::chrono::high_resolution_clock::time_point SortingAlgorithm::endTime() {
  return std::chrono::high_resolution_clock::now();
}
