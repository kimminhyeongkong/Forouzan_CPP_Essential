// 정적 지역 변수

#include <iostream>

void fun();

int main()
{
  fun();
  fun();
  fun();
  return 0;
}

// static 지역 변수 -> 함수가 종료되어도 값 유지
void fun()
{
  static int count = 0;
  count++;
  std::cout << "count = " << count << std::endl;
}
