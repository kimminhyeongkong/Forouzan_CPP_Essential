// 명시적 자료형 변환, 캐스팅

#include <iostream>
using namespace std;

int main()
{
  // 선언
  double x = 23.56;
  int y = 30;

  // 암묵적 형변환
  // 크기가 작은 int값인 y를 double로 형변환
  cout << "캐스팅을 하지 않는 경우: " << x + y << endl;

  // 명시적 형변환(캐스팅)
  // static_cast<자료형>(표현식)
  cout << "캐스팅을 하는 경우: " << static_cast<int>(x) + y << endl;

  return 0;
}