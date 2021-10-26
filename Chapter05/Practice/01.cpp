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
    for(i = 0; i < size; i++)
    {
      for(j = 0; j < i + 1; j++)
      {
        std::cout << '*';
      }
      std::cout << std::endl;
    }
  }
  else if(type == 2 || type == 3)
  {
    for(i = 0; i < size; i++)
    {
      for(j = 0; j < i; j++)
      {
        std::cout << ' ';
      }
      for(j = 0; j < (size-i); j++)
      {
        std::cout << '*';
      }
      std::cout << std::endl;
    }
  }
  else if(type == 4)
  {
    for(i = 0; i < size; i++)
    {
      for(j = 0; j < (size-i) - 1; j++)
      {
        std::cout << ' ';
      }
      for(j = 0; j < i + 1; j++)
      {
        std::cout << '*';
      }
      std::cout << std::endl;
    }
  }

  return 0;
}