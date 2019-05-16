#include "Sorts.h"
#include "ArrReader.h"

#include <chrono>
#include <fstream>
using namespace std;

void testQuickSort(Sorts testSorts, double* ptr, ArrReader testRead)
{
  auto start = chrono::system_clock::now();

  testSorts.quickSort(ptr, 0, testRead.lastArrSize -1); //needs highest index, not size

  auto end = chrono::system_clock::now();


  chrono::duration<double> elapsed_seconds = end-start;
  time_t end_time = chrono::system_clock::to_time_t(end);
  time_t start_time = chrono::system_clock::to_time_t(start);

  cout << "started computation at " << ctime(&start_time) <<
          "finished computation at " << ctime(&end_time) <<
          "elapsed time: " << elapsed_seconds.count() << "s" << endl;
}

void testSelectionSort(Sorts testSorts, double* ptr, ArrReader testRead)
{
  auto start = chrono::system_clock::now();

  testSorts.selectionSort(ptr, testRead.lastArrSize); //needs size, not index

  auto end = chrono::system_clock::now();


  chrono::duration<double> elapsed_seconds = end-start;
  time_t end_time = chrono::system_clock::to_time_t(end);
  time_t start_time = chrono::system_clock::to_time_t(start);

  cout << "started computation at " << ctime(&start_time) <<
          "finished computation at " << ctime(&end_time) <<
          "elapsed time: " << elapsed_seconds.count() << "s" << endl;
}

void testBubbleSort(Sorts testSorts, double* ptr, ArrReader testRead)
{
  auto start = chrono::system_clock::now();

  testSorts.bubbleSort(ptr, testRead.lastArrSize); //needs size, not index

  auto end = chrono::system_clock::now();


  chrono::duration<double> elapsed_seconds = end-start;
  time_t end_time = chrono::system_clock::to_time_t(end);
  time_t start_time = chrono::system_clock::to_time_t(start);

  cout << "started computation at " << ctime(&start_time) <<
          "finished computation at " << ctime(&end_time) <<
          "elapsed time: " << elapsed_seconds.count() << "s" << endl;
}

void testInsertionSort(Sorts testSorts, double* ptr, ArrReader testRead)
{
  auto start = chrono::system_clock::now();

  testSorts.insertionSort(ptr, testRead.lastArrSize); //size, not index

  auto end = chrono::system_clock::now();


  chrono::duration<double> elapsed_seconds = end-start;
  time_t end_time = chrono::system_clock::to_time_t(end);
  time_t start_time = chrono::system_clock::to_time_t(start);

  cout << "started computation at " << ctime(&start_time) <<
          "finished computation at " << ctime(&end_time) <<
          "elapsed time: " << elapsed_seconds.count() << "s" << endl;
}

int main(int argc, char const *argv[]) {

string fpath;
if(argc == 1)
{
  fpath = argv[0];
}
else
{
  cerr << "invalid command line argument";
  throw;
}

//  fpath = "ztest.txt";

ArrReader testRead = ArrReader();

double* ptr1 = testRead.newArrFromFile(fpath);
double* ptr2 = testRead.newArrFromFile(fpath);
double* ptr3 = testRead.newArrFromFile(fpath);
double* ptr4 = testRead.newArrFromFile(fpath);

Sorts testSorts = Sorts();

cout << "QUICK SORT" << endl;
testQuickSort(testSorts, ptr1, testRead);
cout << "BUBBLE SORT" << endl;
testBubbleSort(testSorts, ptr2, testRead);
cout << "SELECTION SORT" << endl;
testSelectionSort(testSorts, ptr3, testRead);
cout << "INSERTION SORT" << endl;
testInsertionSort(testSorts, ptr4, testRead);



//testSorts.printArray(testPtr, testRead.lastArrSize);

delete[] ptr1;
delete ptr1;

delete[] ptr2;
delete ptr2;

delete[] ptr3;
delete ptr3;

delete[] ptr4;
delete ptr4;






  return 0;
}
