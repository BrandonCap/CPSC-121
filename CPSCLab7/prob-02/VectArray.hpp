// Your Name
// CPSC 121-XX
// Lab-XX, prob-XX
// 2020-XX-XX
// your.email@csu.fullerton.edu
//
// What is this implementation file for? Is it paired with anything?
//

#include "Vect2.hpp"

// This is a header guard.
// Read more about it at https://en.wikipedia.org/wiki/Include_guard
#ifndef _VECTARRAY_HPP_
#define _VECTARRAY_HPP_

class VectArray
{
private:
  Vect2 *vect_array;
  int size_;
public:
  VectArray();
  ~VectArray();
  int activePoint = 0;
  VectArray(int size);
  void add(Vect2 v);
  float getSize();
  Vect2 getArray();
  void setSize(float size);
  ostream& write(ostream& out);


};
bool operator==(VectArray& v, VectArray& u);


ostream& operator<<(ostream& out, VectArray& v);

#endif
// The #endif matches the #ifdef at the start of the file
// This is the end of the header guard.
