// 진법, 진법 접두사 조정자

#include <iostream>
using namespace std;

int main()
{
  int x = 1237;

  // noshowbase로 10, 8, 16 진법으로 출력
  cout << "x의 10진수 값: " << x << endl;
  cout << "x의 8진수 값: " << oct << x << endl;
  cout << "x의 16진수 값: " << hex << x << endl;

  // showbase로 각 진법의 접두사 출력
  cout << "x의 10진수 값: " << showbase << x << endl;
  cout << "x의 8진수 값: " << showbase << oct << x << endl;
  cout << "x의 16진수 값: " << showbase << hex << x << endl;

  return 0;
}