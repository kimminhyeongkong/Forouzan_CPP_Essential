#include "square.hpp"

Square::Square(double s)
: side(s)
{
}

Square::~Square()
{
}

double Square::getSide() const
{
  return side;
}

double Square::getPeri() const
{
  return side * 4;
}

double Square::getArea() const
{
  return side * side;
}