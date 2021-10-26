// 객체를 인스턴스화하고 멤버 함수를 호출해서 처리하는 애플리케이션 파일

#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
  Circle circles[3];

  circles[0] = Circle(3.0);
  circles[1] = Circle(4.0);
  circles[2] = Circle(5.0);

  for(int i = 0; i < 3; i++)
  {
    cout << "circle[" << i << "]의 정보" << endl;
    cout << "반지름: " << circles[i].getRadius() << " ";
    cout << ", 넓이: " << circles[i].getArea() << " ";
    cout << ", 둘레: " << circles[i].getPerimeter() << "  ";
    cout << endl;
  }

  return 0;
}