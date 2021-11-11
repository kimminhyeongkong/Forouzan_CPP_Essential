#include "array.h"
#include <iostream>

Array::Array(int arrCapacity)
: capacity(arrCapacity)
{
  // 힙 메모리에 새롭게 배열 만들기
  arr = new int[capacity];
}

Array::~Array()
{
  // 힙 메모리에 있는 배열 없애기
  delete[] arr;
}

// 배열의 마지막 위치에 요소 추가
void Array::Insert()
{
  // 배열이 꽉 찼을 때
  if(size >= capacity)
  {
    std::cout << "배열이 꽉 차서 요소를 추가할 수 없습니다." << std::endl;
    return;
  }

  int input;

  std::cin >> input;
  arr[size] = input;
  size++;
}

// 배열의 요소를 출력
void Array::Print()
{
  for(int i = 0; i < capacity; i++)
  {
    std::cout << arr[i] << "  ";
  }
  std::cout << std::endl;
}