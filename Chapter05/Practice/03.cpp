#include <iostream>

int main()
{
  int num;
  int sum = 0;
  int count = 1;
  double avg;

  std::cin >> num;

  while(num != 1000)
  {
    sum += num;
    std::cin >> num;
    count++;
  }

  avg = sum / count;

  std::cout << "합: " << sum << ", 평균: " << avg << std::endl;

  return 0;  
}