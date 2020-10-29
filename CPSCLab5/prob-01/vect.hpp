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
#ifndef _VECT_HPP_
#define _VECT_HPP_

// 'using namespace std' is a dangerous thing to put in a header file.
// You're going to have to start to move away from this habit.
using namespace std;

struct vect
{
  int x;
  int y;
};

void setVect(vect * v);
int distance(vect * a, vect * b);
ostream& printVect(ostream& out, vect * v);

#endif


// For every function, write a comment defining what the function does
// and clarify what the parameters mean.

// Print out the vector in the form "(X, Y)" to out. In this case,
// out can be cout or cerr as well as any other output stream such
// as a file. The function returns out.


// The #endif matches the #ifdef at the start of the file
// This is the end of the header guard.
