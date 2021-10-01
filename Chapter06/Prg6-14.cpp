// 참조로 전달 (pass by reference)

#include <iostream>

void fun(int& y); // & 기호 -> 변수가 참조인 것을 나타냄

int main()
{
  int x = 10;
  
  fun(x);

  std::cout << "main 함수 내부의 x = " << x << std::endl;

  return 0;
}

void fun(int& y)
{
  y++;
  std::cout << "fun 함수 내부의 y = " << y << std::endl;
  return;
}