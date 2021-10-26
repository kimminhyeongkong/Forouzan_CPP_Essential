#include <iostream>

int main()
{
  int lowerLimit, upperLimit;
  int i;

  std::cout << "두 수를 입력하세요: ";
  std::cin >> lowerLimit;
  std::cin >> upperLimit;

  std::cout << "홀수: ";
  // 홀수 출력
  for(i=lowerLimit; i<=upperLimit; i++)
  {
    if((i % 2) != 0)

    std::cout << i << " ";
  }
  std::cout << std::endl;

  std::cout << "짝수: ";
  // 짝수 출력
  for(i=lowerLimit; i<=upperLimit; i++)
  {
    if((i % 2) == 0)

    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}