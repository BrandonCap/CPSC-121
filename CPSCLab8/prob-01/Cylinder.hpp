// Brandon Capparelli
// CPSC 12X-03
// Lab 08
// 4/28/20
// Brandon.capparelli@csu.fullerton.edu
//
// 3D Shape Volume
//

#include "Shape.hpp"
#include <fstream>
#include <iostream>

using namespace std;

#ifndef _CYLINDER_HPP_
#define _CYLINDER_HPP_

using namespace std;

class Cylinder : public Shape
{
private:
  float r_;
  float h_;
public:
  Cylinder(float r, float h);
  ostream& write(ostream& out) const;
  float volume();
};
ostream& operator<<(ostream& out, const Cylinder& c);

#endif
