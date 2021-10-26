// 배열의 이름과 크기를 매개변수로 입력받아서 수정하는 함수를 사용하는 프로그램

#include <iostream>
using namespace std;

// multiplyByTwo 함수
// 매개변수로 받은 배열을 수정 -> const 한정자 X
void multiplyByTwo(int numbers[], int size)
{
  for(int i = 0; i < size; i++)
  {
    numbers[i] *= 2;
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
  int numbers[15] = {150, 170, 190, 110, 130};

  // 수정 전 배열
  print(numbers, 5);

  // 배열 수정
  multiplyByTwo(numbers, 5);

  // 수정 후 배열
  print(numbers, 5);

  return 0;
}