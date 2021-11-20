#include "cuboid.hpp"

int main()
{
  Rectangle rect1(10, 12);
  Cuboid cuboid1(10, 12, 5);

  cout << "rect1" << endl;
  cout << "둘레: " << rect1.getPerimeter() << endl;
  cout << "넓이: " << rect1.getArea() << endl << endl;

  cout << "cuboid1" << endl;
  cout << "겉넓이: " << cuboid1.getArea() << endl;
  cout << "부피: " << cuboid1.getVolume() << endl << endl;

  return 0;
}