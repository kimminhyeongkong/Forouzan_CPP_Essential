// 함수 오버로딩

#include <iostream>

// 서로 다른 함수 시그니처를 가짐 -> 구분 가능
int max(int num1, int num2); // max(int, int)
int max(int num1, int num2, int num3); // max(int, int, int)
int max(int num1, int num2, int num3, int num4); // max(int, int, int, int)

int main()
{
  std::cout << "maximum(5, 7) = " << max(5, 7) << std::endl;
  std::cout << "maximum(7, 8, 9) = " << max(7, 8, 9) << std::endl;
  std::cout << "maximum(14, 3, 12, 11) = " << max(14, 3, 12, 11) << std::endl;
  return 0;
}

// 매개변수의 개수, 자료형에 따라 함수 오버로딩 가능
int max(int num1, int num2)
{
  int larger;
  if(num1 >= num2)
  {
    larger = num1;
  }
  else
  {
    larger = num2;
  }

  return larger;
}

int max(int num1, int num2, int num3)
{
  return max(max(num1, num2), num3);
}

int max(int num1, int num2, int num3, int num4)
{
  return max(max(max(num1, num2), num3), num4);
}