// 배열의 이름과 크기를 매개변수로 입력받아서 출력하는 함수를 사용하는 프로그램

#include <iostream>
using namespace std;

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
  int numbers[15] = {5, 7, 9, 11, 13};

  print(numbers, 5);

  return 0;
}