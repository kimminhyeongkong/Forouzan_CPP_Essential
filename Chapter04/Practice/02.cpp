// 3개의 정수를 입력받고, 가장 작은 것을 출력

#include <iostream>

int main()
{
  int num1, num2, num3;
  int min;

  std::cout << "3개의 정수를 입력하세요: ";
  std::cin >> num1;
  std::cin >> num2;
  std::cin >> num3;

  if(num1 > num2)
  {
    if(num2 > num3)
      min = num3;
    else
      min = num2;
  }
  else
  {
    if(num1 > num3)
      min = num3;
    else
      min = num1;
  }

  std::cout << "가장 작은 수: " << min << std::endl;

  return 0;
}