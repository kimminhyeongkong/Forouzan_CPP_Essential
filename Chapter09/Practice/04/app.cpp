#include <iostream>
#include "array.h"

int main()
{
  Array arr1(5);

  arr1.Insert();
  arr1.Insert();
  arr1.Insert();
  arr1.Insert();
  arr1.Insert();
  // arr1.Insert(); 배열 꽉 차서 요소 추가 X

  arr1.Print();

  return 0;
}