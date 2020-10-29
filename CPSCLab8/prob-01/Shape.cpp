// Brandon Capparelli
// CPSC 12X-03
// Lab 08
// 4/28/20
// Brandon.capparelli@csu.fullerton.edu
//
// 3D Shape Volume
//

#include "Shape.hpp"
#include <fstream>
#include <iostream>

using namespace std;

const float PI = 3.14159265358979323846;

Shape::Shape(int shape_type)
{
  shape_type_ = shape_type;
}

int Shape::getShapeType() const
{
  return shape_type_;
}

ostream& Shape::write(ostream& out) const
{
  out << "You shouldn't see this; this is Shape::write( ).\n";
  return out;
}

ostream& operator<<(ostream& out, const Shape& s)
{
  return s.write(out);
}
