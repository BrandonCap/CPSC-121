/*

Brandon Capparelli
brandon.capparelli@csu.fullerton.edu
CPSC 121 - 03
3/3/20

*/

#include "LatLon.hpp"
#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char * argv[])
{
  ifstream input_file_stream(argv[1], ios::in);

  if(argc < 2)
  {
    cerr << "Please provide an input file with 5 2D vectors. Exiting.\n";
    exit(1);
  }
  const int NUM_CITIES = 20;
  LatLon points[NUM_CITIES];
  int current_city = 0;
  string tempName;
  float tempLat = 0;
  float tempLon = 0;
  float largest;
  float smallest;
  int sCity1;
  int sCity2;
  int lCity1;
  int lCity2;

  //Data from the file is read to each object variable
  while(!input_file_stream.eof() && current_city < NUM_CITIES)
  {
    cout << setprecision(8) << fixed;
    input_file_stream >> tempName;
    points[current_city].setCity(tempName);
    input_file_stream >> tempLat;
    points[current_city].setLatitude(tempLat);
    input_file_stream >> tempLon;
    points[current_city].setLongitude(tempLon);
    current_city++;
  }

  //The very first distance is set to both the largest and smallest
  //and via process of elimination, the origional distance is check by other
  //distances until the largest is found.
  largest = smallest = points[0].distanceFrom(points[1]);

  for (int i = 0; i < NUM_CITIES; i++)
  {
    for (int j = 0 ; j < NUM_CITIES; j++)
    {
      //Each distance is set to a temperary variable and checked against
      //other distances until the largestand smallest are found
      float temp = points[i].distanceFrom(points[j]);
      if (temp > largest)
      {
        largest = temp;
        lCity1 = i;
        lCity2 = j;
      }
      if (temp < smallest && temp != 0.0)
      {
        smallest = temp;
        sCity1 = i;
        sCity2 = j;
      }
    }
  }
  cout << setprecision(2) << fixed;
  cout << points[lCity1].getCity() << " and " << points[lCity2].getCity()
       << " have the greatest distance of " << largest << " km."
       << endl;
  cout << points[sCity1].getCity() << " and " << points[sCity2].getCity()
       << " have the least distance of " << smallest << " km."
       << endl;

  return 0;
}
