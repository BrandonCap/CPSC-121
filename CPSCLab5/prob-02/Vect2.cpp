/*

Brandon Capparelli
brandon.capparelli@csu.fullerton.edu
CPSC 121 -03
3/3/20

*/

#include "Vect2.hpp"
#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

// For every function, write a comment defining what the function does
// and clarify what the parameters mean.
Vect2::Vect2()//Constructer
{
}
Vect2::~Vect2()//Destructer
{
}
Vect2::Vect2(float xVal, float yVal)
{
  setX(xVal);
  setY(yVal);
}

void Vect2::setX(float xVal)//Sets new x value
{
  x = xVal;
}
void Vect2::setY(float yVal)//Sets new y value
{
  y = yVal;
}
float Vect2::getX()//Gets the stored x value
{
  return x;
}
float Vect2::getY()//Gets the stored y value
{
  return y;
}

ostream& Vect2::write(ostream& out)//Prints out coordinates
{
  out << "(" << x << ", " << y << ")";
  return out;
}
