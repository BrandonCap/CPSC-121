// Brandon Capparelli
// CPSC 121-03
// Midterm
// 2020-03-19
// brandon.capparelli@csu.fullerton.edu
//
//Circle Point Location
//

#include <iostream>

#ifndef _POINT_HPP_
#define _POINT_HPP_

using namespace std;

class Point
{
  private:
    float x_;
    float y_;
  public:
    Point();
    ~Point();
    Point(float x, float y);
    void setPointX(float x);
    void setPointY(float y);
    float getPointX() const;
    float getPointY() const;
    ostream& writePoint(ostream& out);
};

#endif
