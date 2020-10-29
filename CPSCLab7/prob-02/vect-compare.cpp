// Your Name
// CPSC 121-XX
// Lab-XX, prob-XX
// 2020-XX-XX
// your.email@csu.fullerton.edu
//
// What does this program do? What is it's title?
//

#include "Vect2.hpp"
#include "VectArray.hpp"
#include <iostream>
#include <fstream>

using namespace std;

// Do not modify the main function. You need to implement the
// functionality needed in Vect2.hpp/cpp and VectArray.hpp/cpp.

int main(int argc, char* argv[])
{
  // DO NOT TOUCH - Start
  if(argc < 2)
  {
    cerr << "Please provide an input file 2D vectors. Exiting.\n";
    exit(1);
  }
  ifstream input_file;
  // Let's try opening a file that doesn't exist
  input_file.open(argv[1], ios::in);
  if(!input_file.is_open( ))
  {
    cerr << "Couldn't open " << argv[1] << "; exiting\n";
    exit(1);
  }
  int nelm;
  input_file >> nelm;
  cout << "There are " << nelm << " points.\n";
  VectArray my_vect_array(nelm);
  float x;
  float y;
  for(int i = 0; i < nelm; i++)
  {
    input_file >> x;
    input_file >> y;
    my_vect_array.add(Vect2(x, y));
  }

  cout << my_vect_array << "\n";

  VectArray other_vect_array(my_vect_array);

  if(my_vect_array == other_vect_array)
  {
    cout << "As I suspected, they are the same.\n";
  }
  else
  {
    cout << "Something is fishy, the arrays should be the same! Exiting.\n";
    exit(1);
  }
  //delete my_vect_array;

  //delete other_vect_array;

  return 0;
  // DO NOT TOUCH - End
}
