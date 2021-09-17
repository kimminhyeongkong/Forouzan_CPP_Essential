// 점수 기반 학점 결정 프로그램
// 점수 3개의 평균을 학점 계산의 기준으로 한다.

#include <iostream>

int main()
{
  unsigned int score1, score2, score3;
  double average;
  char grade;

  std::cout << "세 점수를 입력하세요: ";
  std::cin >> score1;
  std::cin >> score2;
  std::cin >> score3;

  average = (score1 + score2 + score3) / 3.0f;

  if(average > 90)
  {
    grade = 'A';
  }
  else if((80 <= average) && (average <= 90))
  {
    if(score3 > 90)
    {
      grade = 'A';
    }
    else
    {
      grade = 'B';
    }
  }
  else if((70 <= average) && (average <= 80))
  {
    if(score3 > 80)
    {
      grade = 'B';
    }
    else
    {
      grade = 'C';
    }
  }
  else if((60 <= average) && (average <= 70))
  {
    if(score3 > 70)
    {
      grade = 'C';
    }
    else
    {
      grade = 'D';
    }
  }
  else if(average < 60)
  {
    if(score3 > 60)
    {
      grade = 'D';
    }
    else
    {
      grade = 'F';
    }
  }

  std::cout << "학점: " << grade << std::endl;

  return 0;
}