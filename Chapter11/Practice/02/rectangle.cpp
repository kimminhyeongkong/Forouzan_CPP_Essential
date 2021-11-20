#include "rectangle.hpp"

Rectangle::Rectangle(double lgth, double wth)
: length(lgth), width(wth)
{
}

Rectangle::~Rectangle()
{
}

double Rectangle::getPerimeter() const
{
  return 2 * length + 2 * width;
}

double Rectangle::getArea() const
{
  return length * width;
}