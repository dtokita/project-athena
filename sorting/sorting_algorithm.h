#include <iostream>
#include <vector>
#include <chrono>

class SortingAlgorithm {
  private:
    int size;

    int createRandomVector();
    int createAscendingVector();
    int createDescendingVector();

    void printRandomVector();
    void printAscendingVector();
    void printDescendingVector();

  protected:
    std::vector<int> *rvector;
    std::vector<int> *avector;
    std::vector<int> *dvector;

    std::chrono::high_resolution_clock::time_point rt1;
    std::chrono::high_resolution_clock::time_point rt2;
    std::chrono::high_resolution_clock::time_point at1;
    std::chrono::high_resolution_clock::time_point at2;
    std::chrono::high_resolution_clock::time_point dt1;
    std::chrono::high_resolution_clock::time_point dt2;

  public:
    SortingAlgorithm(int vector_size);
    ~SortingAlgorithm();

    int createVectors();
    void printVectors();

    std::chrono::high_resolution_clock::time_point startTime();
    std::chrono::high_resolution_clock::time_point endTime();

    virtual int createDataStructure() = 0;

    virtual int sortAll() = 0;
    virtual int sortRandom() = 0;
    virtual int sortAscending() = 0;
    virtual int sortDescending() = 0;

    virtual int printAllResults() = 0;
    virtual int printRandomResults() = 0;
    virtual int printAscendingResults() = 0;
    virtual int printDescendingResults() = 0;
};
