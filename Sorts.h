#include<iostream>
using namespace std;

class Sorts
{
public:
  Sorts();
  ~Sorts();

  void quickSort(double* array, int low, int high);


  int partition(double* array, int low, int high);

  void printArray(double* array, int numElements);

  void insertionSort(double* array, int numElements);
  void bubbleSort(double* array, int numElements);
  void selectionSort(double* array, int numElements); //This might not actually be selectionSort, but its close.

};
