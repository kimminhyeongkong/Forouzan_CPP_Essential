// 1~100 사이의 랜덤한 정수 10개 갖는 배열 만들고
// 요소, 평균, 표준 편차 출력

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
  srand(time(NULL));

  int arr[10];
  int sum = 0;
  double average;
  double stdDeviation;  // 제곱근 stdDeviation_powSum
  double stdDeviation_powSum; // (배열 - 평균)^2 의 합
  
  int randNum;
  int i;

  // 할당 후 출력
  for(i = 0; i < 10; i++)
  {
    randNum = 1 + rand() % 100;

    arr[i] = randNum;

    cout << arr[i] << "   ";
  }
  cout << endl;

  // 평균 구하기
  for(i = 0; i < 10; i++)
  {
    sum += arr[i];
  }

  average = sum / 10.0f;

  // 표준 편차 구하기
  for(i = 0; i < 10; i++)
  {
    stdDeviation_powSum += pow((arr[i] - average), 2);
  }

  stdDeviation = sqrt(stdDeviation_powSum);

  cout << "평균: " << average << endl;
  cout << "표준 편차: " << stdDeviation << endl;
  
  return 0;
}