// Your Name
// CPSC 121-XX
// Lab-XX, prob-XX
// 2020-XX-XX
// your.email@csu.fullerton.edu
//
// What is this implementation file for? Is it paired with anything?
//

#include "Vect2.hpp"

// For every function, write a comment defining what the function does
// and clarify what the parameters mean.

Vect2::Vect2()
{
}
Vect2::~Vect2()
{
}
Vect2::Vect2(float x, float y)
{
  setX(x);
  setY(y);
}
void Vect2::setX(float x)
{
  x_ = x;
}
void Vect2::setY(float y)
{
  y_ = y;
}
float Vect2::getX()
{
  return x_;
}
float Vect2::getY()
{
  return y_;
}
ostream& Vect2::write(ostream& out)
{
  out << "(" << x_ << ", " << y_ << ")" << endl;
  return out;
}
bool operator==(Vect2& v, Vect2& u)
{
  if (v.getX() == u.getX() && v.getY() == u.getY())
  {
    return true;
  }
  else
  {
    return false;
  }
}

ostream& operator<<(ostream& out, Vect2& v)
{
  return v.write(out);
}
