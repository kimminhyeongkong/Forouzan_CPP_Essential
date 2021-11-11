// 인덱스와 포인터를 모두 활용해 배열의 요소에 접근

#include <iostream>
using namespace std;

int main()
{
  int numbers[5] = {10, 11, 12, 13, 14};

  cout << "인덱스로 배열 요소 접근" << endl;
  for(int i = 0; i < 5; i++)
  {
    cout << numbers[i] << "  ";
  }
  cout << endl;

  cout << "포인터로 배열 요소 접근" << endl;
  for(int i = 0; i < 5; i++)
  {
    cout << *(numbers + i) << "  ";
  }
  cout << endl;

  return 0;
}