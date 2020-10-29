// Brandon Capparelli
// CPSC 12X-03
// Lab 08
// 4/28/20
// Brandon.capparelli@csu.fullerton.edu
//
// 3D Shape Volume
//

#include "Cone.hpp"
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

Cone::Cone(float r, float h) : Shape(1)
{
  r_ = r;
  h_ = h;
}

ostream& Cone::write(ostream& out) const
{
  out << "Cone(radius=" << r_ << ", height=" << h_ << ")";
}

float Cone::volume()
{
  return (1/3) * PI * pow(r_, 2) * h_;
}

ostream& operator<<(ostream& out, const Cone& c)
{
  return c.write(out);
}
