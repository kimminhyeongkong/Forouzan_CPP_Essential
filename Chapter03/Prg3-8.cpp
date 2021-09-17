// 암묵적 자료형 승격(implicit type promotion)

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
  // 선언
  bool x = true;
  char y = 'A';
  short z = 14;
  float t = 24.5;

  // bool -> int 승격
  cout << "x + 100의 자료형: " << typeid(x+100).name() << endl;
  cout << "x + 100의 값: " << x + 100 << endl;

  // char -> int 승격
  cout << "y + 1000의 자료형: " << typeid(y+1000).name() << endl;
  cout << "y + 1000의 값: " << y + 1000 << endl;

  // short -> int 승격
  cout << "z + 100의 자료형: " << typeid(z+100).name() << endl;
  cout << "z + 100의 값: " << z + 100 << endl;

  // float -> double 승격
  cout << "t + 15000.2의 자료형: " << typeid(t+15000.2).name() << endl;
  cout << "t + 15000.2의 값: " << t + 15000.2 << endl;

  return 0;
}