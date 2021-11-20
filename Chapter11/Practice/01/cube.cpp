#include "cube.hpp"

Cube::Cube(double sd)
: Square(sd)
{
  
}

Cube::~Cube()
{
}

double Cube::getArea() const
{
  return 6 * Square::getArea();
}

double Cube::getVolume() const
{
  return Square::getArea() * Square::getSide();
}