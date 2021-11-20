#ifndef CUBE_H

#define CUBE_H
#include "square.hpp"

class Cube : public Square
{
  private:
  public:
    Cube(double side);
    ~Cube();
    double getArea() const;
    double getVolume() const;
};

#endif