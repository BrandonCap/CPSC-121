// Brandon Capparelli
// CPSC 121-03
// Final
// 2020-05-12
// Brandon.capparelli@csu.fullerton.edu
//
// Polygon Area Finder
//

#include <iostream>

#ifndef _POLYGON_HPP_
#define _POLYGON_HPP_

// The square root of 2
extern const float SQRT_2;
// The square root of 3
extern const float SQRT_3;

// This class represents equilateral, convex polygons.
class Polygon
{
private:
  int _number_of_sides;
  float _side_length;
public:
  Polygon(int number_of_sides, float side_length);
  int getNumberOfSides( ) const;
  float getSideLength( ) const;
  // This is a pure virtual method
  virtual float area( ) = 0;
  // This is a virtual method
  virtual std::ostream& write(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const Polygon& p);

#endif
