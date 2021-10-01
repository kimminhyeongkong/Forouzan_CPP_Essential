// 기본 매개변수

#include <iostream>

double calcEarnings(double rate, double hours = 40);

int main()
{
  std::cout << "직원 1의 임금: " << calcEarnings(22.0) << std::endl;
  std::cout << "직원 2의 임금: " << calcEarnings(12.50, 18) << std::endl;

  return 0;
}

double calcEarnings(double rate, double hours)
{
  double pay;
  pay = hours * rate;
  return pay;
}