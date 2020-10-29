// Brandon Capparelli
// CPSC 121-03
// Lab 6
// 2020-04-14
// brandon.capparelli@csu.fullerton.edu
//
//Circle Point Location
//

#include "Circle.hpp"
#include "Point.hpp"
#include <cmath>
#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char * argv[])
{
  ifstream input_file_stream(argv[1], ios::in);

  if(argc < 2)
  {
    cerr << "Please provide a valid input file. Exiting.\n";
    exit(1);
  }
  const int NUM_POINTS = 20;
  Circle circle;
  Point points[NUM_POINTS];
  float tempCircX, tempCircY;
  float tempPointX, tempPointY;
  float tempRadius;
  int sentinel = 1;
  int activePoint = 0;

  while (!input_file_stream.eof())
  {
    cout << setprecision(8);
    if (sentinel == 1)
    {
      input_file_stream >> tempCircX;
      circle.setCenterX(tempCircX);
      input_file_stream >> tempCircY;
      circle.setCenterY(tempCircY);
      input_file_stream >> tempRadius;
      circle.setRadius(tempRadius);
      sentinel = 2;
    }
    input_file_stream >> tempPointX;
    points[activePoint].setPointX(tempPointX);
    input_file_stream >> tempPointY;
    points[activePoint].setPointY(tempPointY);
    activePoint++;
  }
  for(activePoint = 0; activePoint < NUM_POINTS; activePoint++)
  {
    if (circle.isPointInside(points[activePoint]))
    {
      points[activePoint].writePoint(cout);
      cout << " is inside the circle";
      circle.writeCircle(cout);
      cout << endl;
    }
    else if (!circle.isPointInside(points[activePoint]))
    {
      points[activePoint].writePoint(cout);
      cout << " is outside the circle";
      circle.writeCircle(cout);
      cout << endl;
    }
  }
  return 0;
}
