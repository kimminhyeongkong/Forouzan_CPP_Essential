// pass by reference, return by reference를 활용해 3개의 정수 중 가장 큰 정수 찾기

#include <iostream>
using namespace std;

void FindBiggestNum(int&, int&, int&);

int main()
{
  int x = 20;
  int y = 50;
  int z = 10;

  FindBiggestNum(x, y, z);

  return 0;
}

// 3개의 정수 중 가장 큰 정수를 출력
void FindBiggestNum(int& a, int& b, int& c)
{
  int biggest;

  if(a > b)
  {
    if(a > c)
    {
      biggest = a;
    }
    else
    {
      biggest = c;
    }
  }
  else
  {
    if(b > c)
    {
      biggest = b;
    }
    else
    {
      biggest = c;
    }
  }

  cout << "가장 큰 수: " << biggest << endl;
}