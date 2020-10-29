// Brandon Capparelli
// CPSC 121-03
// Midterm
// 2020-03-19
// brandon.capparelli@csu.fullerton.edu
//
//Circle Point Location
//

#include "Point.hpp"

#include <iostream>

#ifndef _CIRCLE_HPP_
#define _CIRCLE_HPP_

using namespace std;

class Circle
{
  private:
    float centerX_;
    float centerY_;
    float radius_;
  public:
    Circle();
    ~Circle();
    Circle(float x, float);
    void setCenterX(float x);
    void setCenterY(float y);
    void setRadius(float radius);
    float getCenterX();
    float getCenterY();
    float getRadius();
    ostream& writeCircle(ostream& out);
    bool insideCircle(float pointX, float pointY);
    float distanceTo(const Point& p);
};

#endif
