// Brandon Capparelli
// CPSC 121-03
// Final
// 2020-05-12
// Brandon.capparelli@csu.fullerton.edu
//
// Polygon Area Finder
//

#include <iostream>
#include <fstream>
#include "Polygon.hpp"
#include "Octagon.hpp"
#include "Triangle.hpp"

using namespace std;

int main(int argc, char* argv[])
{
  ifstream input_file;

  input_file.open(argv[1], ios::in);
  if(!input_file.is_open())
  {
    cerr << "Couldn't open " << argv[1] << "; exiting\n";
    exit(1);
  }
  Polygon *my_polygon;
  int shape_type;
  float length;

  input_file >> shape_type;
  input_file >> length;
  switch(shape_type)
  {
    case 3:
    {
      my_polygon = new Triangle(length);
    }
    break;
    case 8:
    {
      my_polygon = new Octagon(length);
    }
    break;
    default:
    cout << "Unrecognized polygon type. Existing." << endl;
    exit(1);
    break;
  };

  cout << *my_polygon << " has an area of " << my_polygon->area( ) << endl;

  return 0;
}
