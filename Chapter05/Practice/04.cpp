#include <iostream>

int main()
{
  int num;
  unsigned int posCount = 0;
  unsigned int negCount = 0;

  std::cin >> num;

  while(num != 0)
  {
    if(num > 0) posCount++;
    else negCount++;

    std::cin >> num;
  }

  std::cout << "양수: " << posCount << ", 음수: " << negCount << std::endl;

  return 0;
}