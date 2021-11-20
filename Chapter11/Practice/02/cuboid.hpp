#ifndef CUBOID_H

#define CUBOID_H
#include "rectangle.hpp"

class Cuboid : public Rectangle
{
  private:
    double height;
  public:
    Cuboid(double length, double width, double height);
    ~Cuboid();
    // 겉넓이
    double getArea() const;
    // 부피
    double getVolume() const;
};

#endif