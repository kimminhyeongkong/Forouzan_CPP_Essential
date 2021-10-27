// 100~200 사이의 랜덤한 정수 100개를 요소를 갖는 배열 만들고
// 10개씩 10줄 출력하는 print 함수 작성

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void print(int arr[])
{
  for(int i = 1; i <= 100; i++)
  {
    cout << arr[i-1] << "   ";

    // 열 개 출력하면 줄바꿈
    if(i % 10 == 0 & i != 0)
    {
      cout << endl;
    }
  }

  cout << endl;
}

int main()
{
  srand(time(NULL)); // 현재 시간을 시드로 설정

  int randNum;
  int arr[100];

  for(int i = 0; i < 100; i++)
  {
    randNum = 100 + rand() % 101; // 100~200 사이 난수

    arr[i] = randNum;
  }

  print(arr);

  return 0;
}