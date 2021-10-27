// 1~100 사이의 랜덤한 정수 10개 갖는 배열 만들고
// 배열 요소 출력 print 함수 & 배열 요소 인덱스 뒤로 하나씩 밀어버리는 roundShift 함수
// 마지막 요소의 경우 가장 앞으로 이동
// 원본 배열과 밀어진 배열 출력

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 원본 배열과 밀어진 배열을 출력하는 함수
void print(const int originArr[], const int shiftedArr[], const int arrSize)
{
  cout << "원본 배열: ";
  for(int i = 0; i < arrSize; i++)
  {
    cout << originArr[i] << " ";
  }
  cout << endl;

  cout << "밀어진 배열: ";
  for(int i = 0; i < arrSize; i++)
  {
    cout << shiftedArr[i] << " ";
  }
  cout << endl;
}

// 하나씩 밀린 배열을 만드는 함수
void roundShift(const int originArr[], int shiftedArr[], const int arrSize)
{
  // 첫 번째 요소와 마지막 요소를 바꿈
  shiftedArr[0] = originArr[arrSize - 1];
  shiftedArr[arrSize - 1] = shiftedArr[0];

  // 첫 번째와 마지막 요소를 제외한 모든 요소들을 뒤로 한 칸씩 밀어버림
  for(int i = 1; i < arrSize; i++)
  {
    shiftedArr[i] = originArr[i-1];
  }
}

int main()
{
  srand(time(NULL));

  const int arrSize = 10;
  int originArr[arrSize];
  int shiftedArr[arrSize];
  int randNum;
  int i;

  // 할당
  for(i = 0; i < arrSize; i++)
  {
    randNum = 1 + rand() % 100;
    originArr[i] = randNum;
  }

  roundShift(originArr, shiftedArr, arrSize);
  print(originArr, shiftedArr, arrSize);
  
  return 0;
}