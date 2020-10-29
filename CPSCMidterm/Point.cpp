// Brandon Capparelli
// CPSC 121-03
// Midterm
// 2020-03-19
// brandon.capparelli@csu.fullerton.edu
//
//Circle Point Location
//

#include "Point.hpp"
#include <iostream>

using namespace std;

Point::Point()
{
}
Point::~Point()
{
}
Point::Point(float x, float y)
{
  setPointX(x);
  setPointY(y);
}
void Point::setPointX(float x)
{
  x_ = x;
}
void Point::setPointY(float y)
{
  y_ = y;
}
float Point::getPointX() const
{
  return x_;
}
float Point::getPointY() const
{
  return y_;
}
ostream& Point::writePoint(ostream& out)
{
  out << "(" << x_ << ", "  << y_ << ")";
  return out;
}
