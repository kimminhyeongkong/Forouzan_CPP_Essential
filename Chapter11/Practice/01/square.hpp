#ifndef SQUARE_H

#define SQUARE_H
#include <iostream>
using namespace std;

class Square
{
  private:
    double side;
  public:
    Square(double side);
    ~Square();
    double getSide() const;
    double getPeri() const;
    double getArea() const;
};

#endif