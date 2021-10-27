// 홀수 위치에 있는 배열의 요소만 출력하는 코드

#include <iostream>
using namespace std;

int main()
{
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for(int i = 0; i < 10; i++)
  {
    if(i % 2 == 0) continue;
    else
    {
      cout << arr[i] << "   ";
    }
  }
  cout << endl;

  return 0;
}