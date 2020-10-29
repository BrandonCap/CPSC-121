// Brandon Capparelli
// CPSC 121-03
// Lab 7
// 2020-04-18
// brandon.capparelli@csu.fullerrton.edu
//
// Circle
//

#include <iomanip>
#include <iostream>
#include <fstream>
#include "Circle.hpp"
//#include "Point.hpp"

using namespace std;

int main(int argc, char * argv[])
{
  ifstream inputFile(argv[1], ios::in);
  Circle a;
  Circle b;
  Circle c;
  float aTempX, aTempY, aTempRadius,
        bTempX, bTempY, bTempRadius;
  if(argc < 2)
  {
    cerr << "Please provide a valid input file. Exiting.\n";
    exit(1);
  }
  while(!inputFile.eof())
  {
    inputFile >> aTempX;
    a.setX(aTempX);
    inputFile >> aTempY;
    a.setY(aTempY);
    inputFile >> aTempRadius;
    a.setRadius(aTempRadius);

    inputFile >> bTempX;
    b.setX(bTempX);
    inputFile >> bTempY;
    b.setY(bTempY);
    inputFile >> bTempRadius;
    b.setRadius(bTempRadius);
  }
  cout << "Circle A: " << a << endl << "Circle B " << b << endl;
  c = a + b;
  cout << "The sum of Circles A & B is Circle C: " << c << endl;
  inputFile.close();
  return 0;
}
