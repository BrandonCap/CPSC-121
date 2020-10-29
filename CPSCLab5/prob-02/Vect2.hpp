/*

Brandon Capparelli
brandon.capparelli@csu.fullerton.edu
CPSC 121 -03
3/3/20

*/

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
    float x;
    float y;
  public:
    Vect2();
    ~Vect2();
    Vect2(float xVal, float yVal);
    void setX(float xVal);
    void setY(float yVal);
    float getX();
    float getY();
    ostream& write(ostream& out);



};
//ostream& write(ostream& out);

#endif
// The #endif matches the #ifdef at the start of the file
// This is the end of the header guard.
