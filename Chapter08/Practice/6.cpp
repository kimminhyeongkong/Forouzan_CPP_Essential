// 1~100 사이의 랜덤한 정수 10개 갖는 배열 만들고
// 원본 배열, 반전한 배열 출력

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 원본 배열과 반전된 배열을 출력하는 함수
void print(const int originArr[], const int reversedArr[], const int arrSize)
{
  cout << "원본 배열: ";
  for(int i = 0; i < arrSize; i++)
  {
    cout << originArr[i] << " ";
  }
  cout << endl;

  cout << "반전된 배열: ";
  for(int i = 0; i < arrSize; i++)
  {
    cout << reversedArr[i] << " ";
  }
  cout << endl;
}

// 원본 배열을 뒤집은 배열을 만드는 함수
void reverseArray(const int originArr[], int reversedArr[], const int arrSize)
{
  for(int i = 0; i < arrSize; i++)
  {
    reversedArr[i] = originArr[(arrSize - 1) -i];
  }
}

int main()
{
  srand(time(NULL));

  const int arrSize = 10;
  int originArr[arrSize];
  int reversedArr[arrSize];

  int randNum;
  int i;

  // 할당
  for(i = 0; i < arrSize; i++)
  {
    randNum = 1 + rand() % 100;
    originArr[i] = randNum;
  }

  reverseArray(originArr, reversedArr, arrSize);
  print(originArr, reversedArr, arrSize);
  
  return 0;
}