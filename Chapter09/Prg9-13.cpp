// 정적 메모리 사용

#include <iostream>
using namespace std;

int first = 20; // 전역 변수 -> 정적 메모리에 올라감
static int second = 30; // 전역 정적 변수 -> 정적 메모리에 올라감

int main()
{
  static int third = 50;  // 정적 변수 -> 정적 메모리에 올라감

  cout << "전역 변수의 값: " << first << endl;
  cout << "정적 전역 변수의 값: " << second << endl;
  cout << "정적 변수의 값: " << third << endl;

  return 0;
}