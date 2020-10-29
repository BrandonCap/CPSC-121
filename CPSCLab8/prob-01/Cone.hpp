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

#ifndef _CONE_HPP_
#define _CONE_HPP_

class Cone : public Shape
{
  private:
    float r_;
    float h_;
  public:
    Cone(float r, float h);
    ostream& write(ostream& out) const;
    float volume();
};
ostream& operator<<(ostream& out, const Cone& c);

#endif
