// Your Name
// CPSC 121-XX
// Lab-XX, prob-XX
// 2020-XX-XX
// your.email@csu.fullerton.edu
//
// What is this implementation file for? Is it paired with anything?
//

#include "vect.hpp"
#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

//Calculates distance through the coordinate distance formula
int distance(vect * a, vect * b)
{
  return sqrt(pow(b->x - a->x, 2) + pow(b->y - a->y, 2));
}
void setVect(vect * v)
{
  cout << "(" << v->x << ", " << v->y << ")";
}
//Prints out coordinates
ostream& printVect(ostream& out, vect * v)
{
  out << "(" << v->x << ", " << v->y << ")\n";
  return out;
}


// For every function, write a comment defining what the function does
// and clarify what the parameters mean.

// Print out the vector in the form "(X, Y)" to out. In this case,
// out can be cout or cerr as well as any other output stream such
// as a file. The function returns out.
