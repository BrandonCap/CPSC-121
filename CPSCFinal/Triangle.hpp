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

#ifndef _TRIANGLE_HPP_
#define _TRIANGLE_HPP_

// This class represents equilateral, convex triangle.
// A triangle has 3 sides.
class Triangle : public Polygon
{
private:
  float _l;
public:
  Triangle(float side_length);
  void setLength(float length);
  float getLength();
  virtual float area();
  virtual std::ostream& write(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const Triangle& t);

#endif
