// showpoint, fixed, scientific

#include <iostream>
using namespace std;

int main()
{
  double x = 1237;
  double y = 12376745.5623;

  // fixed, showpoint 사용
  cout << "x의 고정 소수점 형식: " << fixed << x << endl;
  cout << "x의 고정 소수점 형식: " << showpoint << x << endl;

  // scientific 사용
  cout << "y의 과학적 표기법 형식: " << scientific << y << endl;

  return 0;
}