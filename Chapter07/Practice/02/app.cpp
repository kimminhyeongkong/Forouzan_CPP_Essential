#include <iostream>
#include "two.h"
using namespace std;

int main()
{
  Two instance(1, 'S');

  cout << "x: " << instance.getX() << endl;
  cout << "a: " << instance.getA() << endl;

  instance.setX(2);
  instance.setA('Z');

  cout << "x: " << instance.getX() << endl;
  cout << "a: " << instance.getA() << endl;

  return 0; 
}