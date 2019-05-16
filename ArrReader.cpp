#include "ArrReader.h"
#include <stdexcept>
using namespace std;

ArrReader::ArrReader()
{

}

ArrReader::~ArrReader()
{

}

double* ArrReader::newArrFromFile(string fpath)
{
  double *newArr;

  ifstream file(fpath);
  if (file.is_open()) {
    string line;
    getline(file, line);
    int numLines;

    try
    {
      numLines = stoi(line);
    }
    catch (const invalid_argument&)
    {
        cerr << "Argument is invalid\n";
        throw;
    }
    catch (const out_of_range&)
    {
        cerr << "Argument is out of range for an int\n";
        throw;
    }

    newArr = new double[numLines];
    double addition;
    int i = -1;

    while (getline(file, line))
    {
      i++;
      try
      {
        addition = stod(line);
        newArr[i] = addition;
      }
      catch (const invalid_argument&)
      {
          cerr << "Argument is invalid\n";
          throw;
      }
      catch (const out_of_range&)
      {
          cerr << "Argument is out of range for a double\n";
          throw;
      }
    }



    file.close();
    lastArrSize = numLines;
}
else
{
  cerr << "File not found";
  throw;
}



return newArr;

}
