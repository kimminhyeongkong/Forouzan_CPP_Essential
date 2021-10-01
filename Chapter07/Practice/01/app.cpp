#include "num.h"
#include <iostream>
using namespace std;

int main()
{
  One one(1, 3);

  cout << "x: " << one.getX() << endl;
  cout << "y: " << one.getY() << endl;

  return 0;
}