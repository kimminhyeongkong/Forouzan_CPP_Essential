// Time 클래스 멤버 함수 구현 파일

#include <cmath>
#include <cassert>
#include "time.h"

Time::Time(int hrs, int min, int sec)
: hours(hrs), minutes(min), seconds(sec)
{
  normalize();
}

Time::Time()
: hours(0), minutes(0), seconds(0)
{
}

Time::~Time()
{
}

// 접근자 함수
void Time::print() const
{
  cout << hours << ":" << minutes << ":" << seconds << endl;
}

// 설정자 함수
void Time::tick()
{
  seconds++;
  normalize();
}

// 불변 속성 확인
// 문제가 있는 경우 프로그램 중단
void Time::normalize()
{
  // 음수 처리
  if((hours < 0) || (minutes < 0) || (seconds < 0))
  {
    cout << "유효하지 않은 자료입니다. 프로그램을 중단합니다." << endl;
    assert(false);
  }

  // 범위 조정
  if(seconds > 59)
  {
    int temp = seconds / 60;
    seconds = seconds % 60;
    minutes = minutes + temp;
  }

  if(minutes > 59)
  {
    int temp = minutes / 60;
    minutes = minutes % 60;
    hours = hours + temp;
  }

  if(hours > 23)
  {
    hours = hours % 24;
  }
}