#include "cuboid.hpp"

Cuboid::Cuboid(double lgth, double wth, double hgt)
: Rectangle(lgth, wth), height(hgt)
{ 
}

Cuboid::~Cuboid()
{
}

double Cuboid::getArea() const
{
  return 6 * Rectangle::getArea();
}

double Cuboid::getVolume() const
{
  return Rectangle::getArea() * height;
}