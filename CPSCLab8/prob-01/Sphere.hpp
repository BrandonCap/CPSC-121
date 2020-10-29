// Brandon Capparelli
// CPSC 12X-03
// Lab 08
// 4/28/20
// Brandon.capparelli@csu.fullerton.edu
//
// 3D Shape Volume
//

#include "Shape.hpp"
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

#ifndef _SPHERE_HPP_
#define _SPHERE_HPP_

class Sphere : public Shape
{
private:
  float r_;
public:
  Sphere(float r);
  ostream& write(ostream& out) const;
  float volume();
};

ostream& operator<<(ostream& out, const Sphere& s);

#endif
