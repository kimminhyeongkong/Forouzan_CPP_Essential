// 홀수 위치에는 1, 짝수 위치에는 0을 할당하는 코드

#include <iostream>
using namespace std;

int main()
{
  int arr[10];

  for(int i = 0; i < 10; i++)
  {
    if(i % 2 == 0)
    {
      arr[i] = 0;
    }
    else
    {
      arr[i] = 1;
    }

    cout << arr[i] << "   ";
  }
  cout << endl;

  return 0;
}