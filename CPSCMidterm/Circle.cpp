// Brandon Capparelli
// CPSC 121-03
// Midterm
// 2020-03-19
// brandon.capparelli@csu.fullerton.edu
//
//Circle Point Location
//

#include "Circle.hpp"
#include "Point.hpp"
#include <cmath>
#include <iostream>

using namespace std;

Circle::Circle()
{
}
Circle::~Circle()
{
}
Circle::Circle(float x, float y)
{
  setCenterX(x);
  setCenterY(y);
}
void Circle::setCenterX(float x)
{
  centerX_ = x;
}
void Circle::setCenterY(float y)
{
  centerY_ = y;
}
void Circle::setRadius(float radius)
{
  radius_ = radius;
}
float Circle::getCenterX()
{
  return centerX_;
}
float Circle::getCenterY()
{
  return centerY_;
}
float Circle::getRadius()
{
  return radius_;
}
ostream& Circle::writeCircle(ostream& out)
{
  out << "((" << centerX_ << ", " << centerY_ << "), " << radius_ << ")";
  return out;
}
float Circle::distanceTo(const Point& p)
{
  float d;
  d = sqrt(pow(p.getPointX() - centerX_, 2) + pow(p.getPointY() - centerY_, 2));
  return d;
}
