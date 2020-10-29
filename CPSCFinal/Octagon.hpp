// Brandon Capparelli
// CPSC 121-03
// Final
// 2020-05-12
// Brandon.capparelli@csu.fullerton.edu
//
// Polygon Area Finder
//

#include <iostream>

#include "Polygon.hpp"

#ifndef _OCTAGON_HPP_
#define _OCTAGON_HPP_

// This class represents equilateral, convex octagon.
// An octagon has 8 sides.
class Octagon : public Polygon
{
private:
float _l;
public:
  Octagon(float side_length);
  virtual float area();
  virtual std::ostream& write(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const Octagon& o);

#endif
