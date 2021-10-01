#include <iostream>

int main()
{
  unsigned int type;
  unsigned int size;
  int i, j;

  std::cout << "패턴을 입력하세요: ";
  std::cin >> type;
  std::cout << "크기를 입력하세요: ";
  std::cin >> size;

  if(type == 1)
  {
    for(i = size; i > 0; i--)
    {
      for(j = 0; j < (size - i); j++)
      {
        std::cout << ' ';
      }

      for(j = 0; j < 2*i - 1; j++)
      {
        std::cout << '*';
      }
      std::cout << std::endl;
    }
  }
  else if(type == 2)
  {
    for(i = 1; i <= size; i++)
    {
      for(j = 0; j < (size - i); j++)
      {
        std::cout << ' ';
      }
      for(j = 0; j < 2*i - 1; j++)
      {
        std::cout << '*';
      }
      std::cout << std::endl;
    }
  }

  return 0;
}