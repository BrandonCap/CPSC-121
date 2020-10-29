// Your Name
// CPSC 121-XX
// Lab-XX, prob-XX
// 2020-XX-XX
// your.email@csu.fullerton.edu
//
// What is this implementation file for? Is it paired with anything?
//

#include "VectArray.hpp"

VectArray::VectArray()
{
}
VectArray::~VectArray()
{
  delete[] vect_array;
  activePoint = 0;
}
VectArray::VectArray(int size)
{
  setSize(size);
  vect_array = new Vect2[size_];

}
void VectArray::add(Vect2 v)
{
  vect_array[activePoint] = v;
  activePoint++;
}
float VectArray::getSize()
{
  return size_;
}
Vect2 VectArray::getArray()
{
  return *vect_array;
}
void VectArray::setSize(float size)
{
  size_ = size;
}
ostream& VectArray::write(ostream& out)
{
  for(int i = 0; i < size_; i++)
  {
    out << vect_array[i];
  }
  return out;
}
bool operator==(VectArray& v, VectArray& u)
{
  bool equal = true;
    if(v.getSize() == v.getSize())
    {
      equal = true;
    }
    else
    {
      equal = false;
    }
  return equal;
}

ostream& operator<<(ostream& out, VectArray& v)
{
  return v.write(out);
}
