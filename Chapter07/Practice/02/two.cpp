#include "two.h"

// 매개변수 생성자
Two::Two(int num, char character)
: x(num), a(character)
{
}

// 소멸자
Two::~Two()
{
}

// getter
int Two::getX() const
{
  return x;
}

char Two::getA() const
{
  return a;
}

// setter
void Two::setX(int num)
{
  x = num;
}

void Two::setA(char character)
{
  a = character;
}