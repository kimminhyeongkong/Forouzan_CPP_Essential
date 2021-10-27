// 1~10 사이의 랜덤 정수 10개 갖는 배열 만들고
// 최소값, 최대값 찾아서 출력

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int min, max; // 최소값, 최대값
  int randNum;  // 1~10 사이 랜덤한 정수
  int arr[10];
  int i;  // 반복문에서 사용될 인덱스

  srand(time(NULL));

  // 배열에 랜덤한 정수 할당
  for(i = 0; i < 10; i++)
  {
    randNum = 1 + rand() % 10;

    arr[i] = randNum;
  }

  // 배열 출력
  for(i = 0; i < 10; i++)
  {
    cout << arr[i] << "   ";
  }
  cout << endl;

  min = arr[0];
  max = arr[0];

  // 최소값, 최대값 찾기 -> 선형 탐색
  // 최소값 찾기
  for(i = 0; i < 10; i++)
  {
    if(min > arr[i])
    {
      min = arr[i];
    }
  }
  
  // 최대값 찾기
  for(i = 0; i < 10; i++)
  {
    if(max < arr[i])
    {
      max = arr[i];
    }
  }

  cout << "최소값: " << min << ", 최대값: " << max << endl;

  return 0;
}