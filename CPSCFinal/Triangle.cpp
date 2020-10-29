// Brandon Capparelli
// CPSC 121-03
// Final
// 2020-05-12
// Brandon.capparelli@csu.fullerton.edu
//
// Polygon Area Finder
//

#include "Triangle.hpp"

// Don't forget to call the parent class' constructor
Triangle::Triangle(float side_length) : Polygon(3, side_length)
{
  _l = side_length;
}

float Triangle::getLength()
{
  return _l;
}
void Triangle::setLength(float length)
{
  _l = length;
}
std::ostream& Triangle::write(std::ostream& out) const
{
  out << "Triangle(side_lenght = " << _l << ")";
  return out;
}

float Triangle::area( )
{
  //Area = (SQRT_3 / 4) * (a * a)
  // where a is the side length
  float area = (SQRT_3 / 4) * (_l * _l);
  // Fill me in
  return area;
}

std::ostream& operator<<(std::ostream& out, const Triangle& t)
{
  return t.write(out);
}
