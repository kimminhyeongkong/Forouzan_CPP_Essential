#include <iostream>
#include "point.h"
using namespace std;

int main()
{
  Point point1(1, 2);
  Point point2(3, 4);
  Point point3(5, 10);

  cout << "point1은 point2의 "; 
  point1.GetPosDirection(point2);

  cout << "point3은 point2의 "; 
  point3.GetPosDirection(point2);

  cout << "point3과 point2 사이의 거리: " << point3.GetDistance(point2) << endl;

  return 0;
}