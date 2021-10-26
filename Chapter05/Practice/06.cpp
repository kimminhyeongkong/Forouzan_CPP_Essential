#include <iostream>

int main()
{
  int i;

  for(i=1; i<=100; i++)
  {
    if((i % 7) == 0)
      std::cout << i << " ";
  }

  std::cout << std::endl;

  return 0;
}