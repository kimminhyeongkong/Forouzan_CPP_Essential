// 2개의 배열을 매개변수로 받고 유사적으로 리턴하는 함수를 사용하는 프로그램

#include <iostream>
using namespace std;

// reverse 함수
// 두 배열을 매개변수로 받음
// 첫 번째 배열을 거꾸로 한 후 두 번째 배열로 리턴
void reverse(int array1[], int array2[], int size)
{
  for(int i = 0, j = size - 1; i < size; i++, j--)
  {
    array2[j] = array1[i];
  }
  return;
}

// print 함수
// 매개변수: 배열의 이름, 배열의 크기
// 배열의 요소를 수정하지 않으므로 배열을 const로 받음
void print(const int numbers[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << numbers[i] << " ";
  }
  cout << endl;

  return;
}

int main()
{
  int array1[5] = {150, 170, 190, 110, 130};
  int array2[5];

  reverse(array1, array2, 5);

  // 배열 수정
  print(array1, 5);
  print(array2, 5);

  return 0;
}