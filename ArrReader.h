#include <iostream>
#include <fstream>
using namespace std;

class ArrReader
{
public:
  ArrReader();
  ~ArrReader();

double* newArrFromFile(string fpath);
int lastArrSize;

};
