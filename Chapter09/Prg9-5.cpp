// 데이터 변수의 값에 직접 접근 or 간접 접근해서 출력하는 프로그램

#include <iostream>
using namespace std;

int main()
{
  // 변수 선언 & 초기화
  int score = 92;
  int* pScore = &score;

  // 데이터 변수 값에 직접 접근 or 간접 접근
  cout << "score에 직접 접근: " << score << endl;
  cout << "score에 간접 접근: " << *pScore << endl;

  return 0;
}