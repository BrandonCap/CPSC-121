// Brandon Capparelli
// CPSC 121-03
// Lab 7
// 2020-04-18
// brandon.capparelli@csu.fullerrton.edu
//
// Circle
//

#include "Circle.hpp"
#include <iostream>

using namespace std;

Circle::Circle()
{
}
Circle::~Circle()
{
}
Circle::Circle(float x, float y, float radius)
{
  setX(x);
  setY(y);
  setRadius(radius);
}
float Circle::getX() const
{
  return x_;
}
float Circle::getY() const
{
  return y_;
}
float Circle::getRadius() const
{
  return radius_;
}
void Circle::setX(float x)
{
  x_ = x;
}
void Circle::setY(float y)
{
  y_ = y;
}
void Circle::setRadius(float radius)
{
  radius_ = radius;
}
Circle Circle::operator+(const Circle& c)
{
  return Circle((x_ + c.getX())/2, (y_ + c.getY())/2, radius_ + c.getRadius());
}
ostream& Circle::write(ostream& out)
{
  out << "((" << x_ << ", " << y_ << "), " << radius_ << ")";
  return out;
}
ostream& operator<<(ostream& out, Circle& c)
{
  return c.write(out);
}
