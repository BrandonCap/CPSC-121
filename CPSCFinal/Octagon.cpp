// Brandon Capparelli
// CPSC 121-03
// Final
// 2020-05-12
// Brandon.capparelli@csu.fullerton.edu
//
// Polygon Area Finder
//

#include "Octagon.hpp"

// Don't forget to call the parent class' constructor
Octagon::Octagon(float side_length) : Polygon(8, side_length)
{
  _l = side_length;
}

std::ostream& Octagon::write(std::ostream& out) const
{
  out << "Octagon(side_length = " << _l <<  ")";
  return out;
}

float Octagon::area( )
{
  float area = 2 * (1 + SQRT_2) * (_l * _l);
  return area;
}

std::ostream& operator<<(std::ostream& out, const Octagon& o)
{
  return o.write(out);
}
