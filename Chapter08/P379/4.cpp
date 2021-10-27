// 홀수 위치에 있는 배열의 요소만 출력하는 코드

#include <iostream>
using namespace std;

int main()
{
  int arr[10];

  for(int i = 0; i < 10; i++)
  {
    if(i < 5)
    {
      arr[i] = 5;
    }
    else
    {
      arr[i] = 10;
    }

    cout << arr[i] << "   ";
  }
  cout << endl;

  return 0;
}