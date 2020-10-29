// Brandon Capparelli
// CPSC 12X-03
// Lab 08
// 4/28/20
// Brandon.capparelli@csu.fullerton.edu
//
// 3D Shape Volume
//

#include "Cylinder.hpp"
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

Cylinder::Cylinder(float r, float h) : Shape(2)
{
  r_ = r;
  h_ = h;
}

ostream& Cylinder::write(ostream& out) const
{
  out << "Cylinder(radius=" << r_ << ", height=" << h_ << ")";
}

float Cylinder::volume()
{
  return PI * pow(r_, 2) * h_;
}

ostream& operator<<(ostream& out, const Cylinder& c)
{
  return c.write(out);
}
