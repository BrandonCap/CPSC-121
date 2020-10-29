// Brandon Capparelli
// CPSC 12X-03
// Lab 08
// 4/28/20
// Brandon.capparelli@csu.fullerton.edu
//
// 3D Shape Volume
//

#include <iostream>
#include <fstream>
#include "Cone.hpp"
#include "Cylinder.hpp"
#include "Shape.hpp"
#include "Sphere.hpp"

using namespace std;

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    cerr << "Please provide an input file 2D vectors. Exiting.\n";
    exit(1);
  }

  ifstream input_file;

  input_file.open(argv[1], ios::in);
  if(!input_file.is_open())
  {
    cerr << "Couldn't open " << argv[1] << "; exiting\n";
    exit(1);
  }

  Shape *my_shape;
  int shape_type;
  float radius;
  float height;

  input_file >> shape_type;

  switch(shape_type)
  {
    case 1:
    {
      input_file >> radius;
      input_file >> height;
      Cone z = Cone(radius, height);
      my_shape = &z;
    }
    break;
    case 2:
    {
      input_file >> radius;
      input_file >> height;
      Cylinder c = Cylinder(radius, height);
      my_shape = &c;
    }
    break;
    case 3:
    {
      input_file >> radius;
      Sphere s = Sphere(radius);
      my_shape = &s;
    }
    break;
  };
  cout << *my_shape << " has a volume of " << my_shape->volume( ) << endl;
  return 0;
}
