// Brandon Capparelli
// CPSC 12X-03
// Lab 08
// 4/28/20
// Brandon.capparelli@csu.fullerton.edu
//
// 3D Shape Volume
//

#include <fstream>
#include <iostream>

using namespace std;

#ifndef _SHAPE_HPP_
#define _SHAPE_HPP_

extern const float PI;

class Shape
{
private:
  int shape_type_;
public:
  Shape(int shape_type);
  int getShapeType() const;
  virtual float volume() = 0;
  virtual ostream& write(ostream& out) const;
};

ostream& operator<<(ostream& out, const Shape& s);

#endif
