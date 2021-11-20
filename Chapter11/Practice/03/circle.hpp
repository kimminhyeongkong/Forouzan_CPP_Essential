#ifndef CIRCLE_H

#define CIRCLE_H
#define PI 3.141592
#include <iostream>
using namespace std;

class Circle
{
  private:
    double radius;
  public:
    Circle(double radius);
    ~Circle();
  public:
    // 반지름
    double getRadius() const;
    // 둘레
    double getCircumference() const;
    // 넓이
    double getArea() const;
};

#endif