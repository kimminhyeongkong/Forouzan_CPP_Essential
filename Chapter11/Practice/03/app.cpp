#include "sphere.hpp"

int main()
{
  Circle circle1(5.0);
  Sphere sphere1(5.0);

  cout << "circle1" << endl;
  cout << "둘레: " << circle1.getCircumference() << endl;
  cout << "넓이: " << circle1.getArea() << endl << endl;

  cout << "sphere1" << endl;
  cout << "겉넓이: " << sphere1.getSurfaceArea() << endl;
  cout << "부피: " << sphere1.getVolume() << endl << endl;

  return 0;
}