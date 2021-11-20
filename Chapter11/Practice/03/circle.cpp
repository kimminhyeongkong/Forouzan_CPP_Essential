#include "circle.hpp"

Circle::Circle(double rad)
: radius(rad)
{
}

Circle::~Circle()
{
}

double Circle::getRadius() const
{
  return radius;
}

double Circle::getCircumference() const
{
  return 2 * PI * radius;
}

double Circle::getArea() const
{
  return PI * radius * radius;
}