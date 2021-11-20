#ifndef SPHERE_H

#define SPHERE_H
#include "circle.hpp"

class Sphere : public Circle
{
  public:
    Sphere(double radius);
    ~Sphere();
  public:
    // 원의 겉넓이
    double getSurfaceArea() const;
    // 원의 부피
    double getVolume() const;
};

#endif