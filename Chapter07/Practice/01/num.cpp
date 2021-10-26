#include <iostream>
#include "num.h"
using namespace std;

// 매개변수 생성자
One::One(int parX, int parY)
: x(parX), y(parY)
{
}

// 소멸자
One::~One()
{
}

int One::getX() const
{
  return x;
}

int One::getY() const
{
  return y;
}