// EOF 제어로 반복문 사용

#include <iostream>

int main()
{
  int sum = 0;
  int num;

  std::cout << "첫 번째 숫자를 입력하세요(종료하려면 EOF 입력): ";
  while(std::cin >> num) // cin에 EOF가 들어오면 false를 리턴함.
  {
    sum += num;
    std::cout << "다음 숫자를 입력하세요: ";
  }

  std::cout << std::endl << "합: " << sum << std::endl;
  return 0;
}