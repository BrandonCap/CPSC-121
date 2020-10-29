// Brandon Capparelli
// CPSC 121-03
// Lab 6
// 2020-04-14
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
    bool isPointInside(const Point& p);
    float distanceTo(const Point& p);
};

#endif
