// Brandon Capparelli
// CPSC 121-03
// Final
// 2020-05-12
// Brandon.capparelli@csu.fullerton.edu
//
// Polygon Area Finder
//

#include "Polygon.hpp"

const float SQRT_2 = 1.41421356237309514547;
const float SQRT_3 = 1.73205080756887719318;

Polygon::Polygon(int number_of_sides, float side_length)
{
  _number_of_sides = number_of_sides;
  _side_length = side_length;
}

int Polygon::getNumberOfSides() const
{
  return _number_of_sides;
}

float Polygon::getSideLength() const
{
  return _side_length;
}

std::ostream& Polygon::write(std::ostream& out) const
{
  out << "This shouldn't be seen.";
  return out;
}

std::ostream& operator<<(std::ostream& out, const Polygon& p)
{
  return p.write(out);
}
