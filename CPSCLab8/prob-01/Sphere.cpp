// Brandon Capparelli
// CPSC 12X-03
// Lab 08
// 4/28/20
// Brandon.capparelli@csu.fullerton.edu
//
// 3D Shape Volume
//

#include "Sphere.hpp"
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

Sphere::Sphere(float r) : Shape(3)
{
  r_ = r;
}

ostream& Sphere::write(ostream& out) const
{
  out << "Sphere(radius=" << r_ << ")";
}

float Sphere::volume()
{
  return (4/3) * PI * pow(3, r_);
}

ostream& operator<<(ostream& out, const Sphere& s)
{
  return s.write(out);
}
