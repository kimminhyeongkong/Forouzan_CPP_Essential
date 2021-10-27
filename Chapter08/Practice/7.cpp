// 1~100 사이의 랜덤한 정수 20개 갖는 배열 만들고
// 홀수 요소를 추출해서 홀수 배열을 만들고
// 짝수 요소를 추출해서 짝수 배열은 만든 후
// 둘 다 출력

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 홀수 배열과 짝수 배열을 출력하는 함수
void print(const int originArr[], const int oddArr[], const int evenArr[], const int arrSize)
{
  cout << "원본 배열: ";
  for(int i = 0; i < arrSize; i++)
  {
    cout << originArr[i] << " ";
  }
  cout << endl;

  cout << "홀수 배열: ";
  for(int i = 0; i < arrSize; i++)
  {
    if(oddArr[i] != -1)
    {
      cout << oddArr[i] << " ";
    }
  }
  cout << endl;

  cout << "짝수 배열: ";
  for(int i = 0; i < arrSize; i++)
  {
    if(evenArr[i] != -1)
    {
    cout << evenArr[i] << " ";
    }
  }
  cout << endl;
}

// 홀수 배열을 만드는 함수
// 짝수 부분은 -1로 할당해 사용하지 않음을 명시
void MakeOddArray(const int originArr[], int oddArr[], const int arrSize)
{
  for(int i = 0; i < arrSize; i++)
  {
    if(originArr[i] % 2 != 0)
    {
      oddArr[i] = originArr[i];
    }
    else
    {
      oddArr[i] = -1;
    }
  }
}

// 짝수 배열을 만드는 함수
// 홀수 부분은 -1로 할당해 사용하지 않음을 명시
void MakeEvenArray(const int originArr[], int evenArr[], const int arrSize)
{
  for(int i = 0; i < arrSize; i++)
  {
    if(originArr[i] % 2 == 0)
    {
      evenArr[i] = originArr[i];
    }
    else
    {
      evenArr[i] = -1;
    }
  }
}

int main()
{
  srand(time(NULL));

  const int arrSize = 20;
  int originArr[arrSize];
  int oddArr[arrSize];
  int evenArr[arrSize];

  int randNum;
  int i;

  // 원본 배열 할당
  for(i = 0; i < arrSize; i++)
  {
    randNum = 1 + rand() % 100;
    originArr[i] = randNum;
  }

  MakeOddArray(originArr, oddArr, arrSize);
  MakeEvenArray(originArr, evenArr, arrSize);
  print(originArr, oddArr, evenArr, arrSize);

  return 0;
}