// 1~100 사이의 랜덤한 정수 10개 갖는 배열 만들고
// 원본 배열 출력 후 최소값, 최대값을 제거한 배열 출력

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 원본 배열과 최소, 최대값을 제거한 배열을 출력하는 함수
void print(const int originArr[], const int eliminatedArr[], const int arrSize)
{
  cout << "원본 배열: ";
  for(int i = 0; i < arrSize; i++)
  {
    cout << originArr[i] << " ";
  }
  cout << endl;

  cout << "최소값, 최대값이 제거된 배열: ";
  for(int i = 0; i < arrSize; i++)
  {
    if(eliminatedArr[i] != -1)
    {
      cout << eliminatedArr[i] << " ";
    }
  }
  cout << endl;
}

int main()
{
  srand(time(NULL));

  const int arrSize = 10;
  int originArr[arrSize];
  int eliminatedArr[arrSize];
  int min, max;

  int randNum;
  int i;

  // 할당
  for(i = 0; i < arrSize; i++)
  {
    randNum = 1 + rand() % 100;
    originArr[i] = randNum;
  }

  min = max = originArr[0];

  // 최소값, 최대값 찾기 -> 선형 탐색
  // 최소값 찾기
  for(i = 0; i < arrSize; i++)
  {
    if(min > originArr[i])
    {
      min = originArr[i];
    }
  }
  
  // 최대값 찾기
  for(i = 0; i < arrSize; i++)
  {
    if(max < originArr[i])
    {
      max = originArr[i];
    }
  }

  // 제거된 배열 만들기
  for(i = 0; i < arrSize; i++)
  {
    // 최대값 or 최소값이면 배열의 값을 -1로 설정해
    // 제거되었음을 나타냄
    if(originArr[i] == min || originArr[i] == max)
    {
      eliminatedArr[i] = -1;
    }
    else
    {
      eliminatedArr[i] = originArr[i];
    }
  }

  print(originArr, eliminatedArr, arrSize);
  
  return 0;
}