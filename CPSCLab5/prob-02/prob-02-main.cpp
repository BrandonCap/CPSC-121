/*

Brandon Capparelli
brandon.capparelli@csu.fullerton.edu
CPSC 121 -03
3/3/20

*/

#include "Vect2.hpp"
#include <cmath>
#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;

float distance(float ax, float ay, float bx, float by);

float distance(float ax, float ay, float bx, float by)
{
  return sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
}

int main(int argc, char* argv[])
{
  ifstream input_file_stream(argv[1], ios::in);

  if(argc < 2)
  {
    cerr << "Please provide an input file with 5 2D vectors. Exiting.\n";
    exit(1);
  }
  const int NUM_POINTS = 5;
  Vect2 points[NUM_POINTS];
  int current_point = 0;
  float tempX = 0, tempY = 0;
  float largest;
  float smallest;
  int smallX;
  int smallY;
  int largeX;
  int largeY;

  //Data from the file is read to each object variable
  while(!input_file_stream.eof())
  {
    cout << setprecision(8) << fixed;
    input_file_stream >> tempX;
    points[current_point].setX(tempX);
    input_file_stream >> tempY;
    points[current_point].setY(tempY);
    current_point++;
  }

  for(current_point = 0; current_point < NUM_POINTS; current_point++)
  {
    cout << current_point + 1 << ": ";
    points[current_point].write(cout);
  }

  //The very first distance is set to both the largest and smallest
  //and via process of elimination, the origional distance is check by other
  //distances until the largest is found.
  largest = smallest = distance(points[0].getX(), points[0].getY(),
                       points[1].getX(), points[1].getY());

  for (int i = 0; i < NUM_POINTS; i++)
  {
    for (int j = 0 ; j < NUM_POINTS; j++)
    {
      //Each distance is set to a temperary variable and checked against
      //other distances until the largestand smallest are found
      float temp = distance(points[i].getX(), points[i].getY(),
                   points[j].getX(), points[j].getY());
      cout << i + 1 << " & " << j + 1 << " " << temp
           << endl;
      if (temp > largest)
      {
        largest = temp;
        largeX = i;
        largeY = j;
      }
      if (temp < smallest && temp != 0.0)
      {
        smallest = temp;
        smallX = i;
        smallY = j;
      }
    }
  }
  cout << "vect[" << largeX << "] ";
  points[largeX].write(cout);
  cout << " and vect[" << largeY << "] ";
  points[largeY].write(cout);
  cout << " have the greatest distance of "
       << largest << "."
       << endl;

  cout << "vect[" << smallX << "] ";
  points[smallX].write(cout);
  cout << " and vect[" << smallY << "] ";
  points[smallY].write(cout);
  cout << " have the least distance of "
       << smallest << "."
       << endl;
  return 0;
}
