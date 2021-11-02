// 원본 변수와 참조 변수를 선언하고
// 초기화한 뒤에 각각의 변수를 사용해
// 값에 접근

#include <iostream>
using namespace std;

int main()
{
  // 참조 관계 생성
  int score = 92;
  int& rScore = score;

  // 데이터 변수를 사용해서 접근
  cout << "데이터 변수를 사용해서 값에 접근하기." << endl;
  cout << "score: " << score << endl;
  // 참조 변수를 사용해서 접근
  cout << "참조 변수를 사용해서 값에 접근하기" << endl;
  cout << "rScore: " << rScore << endl;

  return 0;
}