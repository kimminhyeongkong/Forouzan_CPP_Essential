#include "cube.hpp"

int main()
{
  Square square1(5.0);
  Cube cube1(5.0);

  cout << "square1의 속성" << endl;
  cout << "둘레: " << square1.getPeri() << endl;
  cout << "넓이: " << square1.getArea() << endl;
  cout << endl;

  cout << "cube1의 속성" << endl;
  cout << "겉넓이: " << cube1.getArea() << endl;
  cout << "부피: " << cube1.getVolume() << endl;
  cout << endl;

  return 0;
}