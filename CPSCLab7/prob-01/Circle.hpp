// Brandon Capparelli
// CPSC 121-03
// Lab 7
// 2020-04-18
// brandon.capparelli@csu.fullerrton.edu
//
// Circle
//

#include <iostream>

using namespace std;

#ifndef _CIRCLE_HPP_
#define _CIRCLE_HPP_

class Circle
{
  private:
    float x_;
    float y_;
    float radius_;
  public:
    Circle();
    ~Circle();
    Circle(float x, float y, float radius);
    float getX() const;
    float getY() const;
    float getRadius() const;
    void setX(float x);
    void setY(float y);
    void setRadius(float radius);
    Circle operator+(const Circle& c);
    ostream& write(ostream& out);
};

ostream& operator<<(ostream& out, Circle& c);

#endif
