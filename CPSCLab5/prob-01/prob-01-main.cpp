/*

Brandon Capparelli
brandon.capparelli@csu.fullerton.edu
CPSC 121 - 03
3/1/20

*/
#include "vect.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    cerr << "Please provide an input file with 5 2D vectors. Exiting.\n";
    exit(1);
  }
  ifstream input_file_stream(argv[1], ios::in);
  const int NUM_POINTS = 5;
  vect points[NUM_POINTS];
  int current_point = 0;
  int largest;
  int smallest;
  int smallX;
  int smallY;
  int largeX;
  int largeY;

  //Data from the file is read to each struct variable
  while(!input_file_stream.eof())
  {
    input_file_stream >> points[current_point].x;
    input_file_stream >> points[current_point].y;
    current_point++;
  }

  for(current_point = 0; current_point < NUM_POINTS; current_point++)
  {
    cout << current_point + 1 << ": ";
    printVect(cout, &points[current_point]);
  }

  //The very first distance is set to both the largest and smallest
  //and via process of elimination, the origional distance is check by other
  //distances until the largest is found.
  largest = smallest = distance(&points[0], &points[1]);

  for (int i = 0; i < NUM_POINTS; i++)
  {
    for (int j = 0 ; j < NUM_POINTS; j++)
    {
      cout << i + 1 << " & " << j + 1 << " " << distance(&points[i], &points[j])
           << endl;
       //Each distance is checked against
       //other distances until the largest and smallest are found
      if (distance(&points[i], &points[j]) > largest)
      {
        largest = distance(&points[i], &points[j]);
        largeX = i;
        largeY = j;
      }
      if (distance(&points[i], &points[j]) < smallest &&
         distance(&points[i], &points[j]) != 0)
      {
        smallest = distance(&points[i], &points[j]);
        smallX = i;
        smallY = j;
      }
    }
  }
  cout << "vect[" << largeX << "] ";
  setVect(&points[largeX]);
  cout << " and vect[" << largeY << "] ";
  setVect(&points[largeY]);
  cout << " have the greatest distance of "
       << distance(&points[largeX], &points[largeY])
       << endl;

  cout << "vect[" << smallX << "] ";
  setVect(&points[smallX]);
  cout << " and vect[" << smallY << "] ";
  setVect(&points[smallY]);
  cout << " have the least distance of "
       << distance(&points[smallX], &points[smallY]) << "."
       << endl;
  return 0;
}
