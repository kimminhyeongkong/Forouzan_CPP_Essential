#ifndef RECTANGLE_H

#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle
{
  private:
    double length;
    double width;
  public:
    Rectangle(double length, double width);
    ~Rectangle();
    // 둘레
    double getPerimeter() const;
    // 넓이
    double getArea() const;
};

#endif