#include "Sorts.h"
using namespace std;

Sorts::Sorts()
{

}

Sorts::~Sorts()
{

}

void Sorts::quickSort(double* array, int low, int high)
{
  //low start index, high end index. Not array size
if(low<high)
{
  int part = partition(array, low, high);

  quickSort(array, low, part - 1);
  quickSort(array, part + 1, high);
}

}

int Sorts::partition(double* array, int low, int high)
{

  double pivot = array[high];


  //index of smaller element
  int i = (low-1);
  for(int j = low; j<high; j++)
  {
    if(array[j] <= pivot)
    {
      i++;
      double tempj = array[j];
      array[j] = array[i];
      array[i] = tempj;

    }


  }

  double tempHigh = array[high];
  array[high] = array[i+1];
  array[i+1] = tempHigh;

  return(i+1);
}

void Sorts::printArray(double* array, int numElements)
{
  for(int i = 0; i<numElements; i++)
  {
    cout << "Index " << i << " is " << array[i] << endl;
  }
}

void Sorts::selectionSort(double* array, int numElements) //this one is array size, not highest index
{
  for(int i=0;i<numElements-1; i++) //for every element but the last one
  {
    for(int j=i+1; j<numElements; j++) //look at each element to the right of that element
    {
      if(array[i] > array[j]) //if this right element is less than array[i]
      {
        double tempI = array[i]; //swap I and J
        array[i] = array[j];
        array[j] = tempI;
      }
    }
  }


}

void Sorts::bubbleSort(double* array, int numElements) //array size
{
  for(int i=0; i<numElements; i++)
  {
    for(int j=0; j<numElements-1; j++)
    {
      if(array[j] > array[j+1])
      {
        double tempJ = array[j];
        array[j] = array[j+1];
        array[j+1] = tempJ;
      }
    }
  }
}

void Sorts::insertionSort(double* array, int numElements)
{
  
}
