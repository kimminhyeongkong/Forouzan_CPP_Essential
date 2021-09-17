// 수업료 계산 프로그램
// 최대 12학점, 학점 당 10달러의 수수료 지불
// 12학점을 넘는 분량은 수수료가 없음
// 등록비는 학생 당 10달러

#include <iostream>

int main()
{
  unsigned int credit; // 이수 학점
  unsigned int tution; // 등록금

  std::cout << "이수 학점을 입력하세요: ";
  std::cin >> credit;

  if(credit > 12)
  {
    tution = credit * 10; // 12학점 초과 -> 학점 당 등록금만
  }
  else
  {
    tution = (credit * 10) * 2; // 12학점 이하 -> 학점 당 등록금 + 학점 당 수수료(10달러)
  }

  std::cout << "수업료: " << tution << std::endl;

  return 0;
}