#include <iostream>
#include <ctime>

int main()
{
  int num1, num2, num3, num4, num5;
  int sum = 0;

  srand(time(0));

  // 10 ~ 90
  num1 = rand() % 81 + 10;
  num2 = rand() % 81 + 10;
  num3 = rand() % 81 + 10;
  num4 = rand() % 81 + 10;
  num5 = rand() % 81 + 10;

  sum = num1 + num2 + num3 + num4 + num5;

  std::cout << sum << std::endl;

  return 0;
}