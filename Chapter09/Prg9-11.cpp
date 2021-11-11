// 포인터를 사용해 배열 거꾸로 만들기

#include <iostream>
using namespace std;

void reverse(int*, int);

int main()
{
  int arr[5] = {10, 11, 12, 13, 14};

  reverse(arr, 5);

  cout << "배열 거꾸로 출력: ";
  for(int i = 0; i < 5; i++)
  {
    cout << *(arr+i) << "   ";
  }
  cout << endl;

  return 0;
}

// 배열에 대한 포인터와 사이즈를 전달받아 배열을 거꾸로 반전
void reverse(int* pArr, int size)
{

  int i = 0;
  int j = size - 1;

  while(i < size / 2)
  {
    int temp = *(pArr + i);
    *(pArr + i) = *(pArr + j);
    *(pArr + j) = temp;
    i++;
    j--;
  }
}