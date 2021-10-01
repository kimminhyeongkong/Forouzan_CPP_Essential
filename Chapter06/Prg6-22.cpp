// 범위 해결 연산자(Scope Resolution Operator)

#include <iostream>

int num = 5;

int main()
{
  int num = 25;
  std::cout << "전역 변수 num의 값 = " << ::num << std::endl; // :: -> 지역 변수 쉐도잉 무시하고 전역 변수에 접근
  std::cout << "지역 변수 num의 값 = " << num << std::endl;
  return 0;
}