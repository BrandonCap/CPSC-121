// Your Name
// CPSC 121-XX
// Lab-XX, prob-XX
// 2020-XX-XX
// your.email@csu.fullerton.edu
//
// What is this header file for? Is it paired with anything?
//

#include <iostream>

// This is a header guard.
// Read more about it at https://en.wikipedia.org/wiki/Include_guard
#ifndef _VECT2_HPP_
#define _VECT2_HPP_

// 'using namespace std' is a dangerous thing to put in a header file.
// You're going to have to start to move away from this habit.
using namespace std;

// For every function, write a comment defining what the function does
// and clarify what the parameters mean.

class Vect2
{
private:
  float x_;
  float y_;
public:
  Vect2();
  ~Vect2();
  Vect2(float x, float y);
  void setX(float x);
  void setY(float y);
  float getX();
  float getY();
  ostream& write(ostream& out);

};
bool operator==(Vect2& v, Vect2& u);
ostream& operator<<(ostream& out, Vect2& v);

#endif
// The #endif matches the #ifdef at the start of the file
// This is the end of the header guard.
