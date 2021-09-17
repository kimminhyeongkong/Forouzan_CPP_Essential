// 사용자로부터 부호 없는 두 자리 정수를 입력 받고, 자리수의 값을 바꿔서 출력하는 프로그램
#include <iostream>

int main()
{
  unsigned int num;
  unsigned int first, second;

  std::cout << "부호 없는 두 자리 정수를 입력하세요: ";
  std::cin >> num;

  // 10의 자리
  first = num / 10;
  // 1의 자리
  second = num % 10;

  std::cout << second << first << std::endl;

  return 0;
}