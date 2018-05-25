#include <iostream>
#include "bubble_sort.h"

int main() {
  BubbleSort *bs = new BubbleSort(50);
  bs->createVectors();
  bs->printVectors();
  bs->sort();
  bs->printVectors();
  bs->printResults();
}
