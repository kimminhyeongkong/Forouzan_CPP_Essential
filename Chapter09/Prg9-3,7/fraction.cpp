// Fraction 클래스의 멤버 함수들 정의

#include <iostream>
#include <cmath>
#include <cassert>
#include "fraction.h"
using namespace std;

// 생성자
// 매개변수 있는 생성자: 불변 속성에 따라 분자 분모 값을 받고 약분하여 분수 객체 생성
Fraction::Fraction(int num, int den = 1)
: numer(num), denom(den)
{
  normalize();
}

// 기본 생성자: 0/1 생성
Fraction::Fraction()
: numer(0), denom(1)
{
}

// 복사 생성자: 기존의 객체 복사
Fraction::Fraction(const Fraction& fract)
: numer(fract.numer), denom(fract.denom)
{
}

// 소멸자
Fraction::~Fraction()
{
}

// 접근자 함수
int Fraction::getNumer() const
{
  return numer;
}

int Fraction::getDenom() const
{
  return denom;
}

void Fraction::print() const
{
  cout << numer << "/" << denom << endl;
}

// 설정자
void Fraction::setNumer(int num)
{
  numer = num;
  normalize();  // 약분
}

void Fraction::setDenom(int den)
{
  denom = den;
  normalize();
}

// 3가지 작업을 통해 분수를 약분
void Fraction::normalize()
{
  // 분모가 0인 경우
  if(denom == 0)
  {
    cout << "잘못된 분모 값입니다. 프로그램을 중단합니다." << endl;
    assert(false);
  }

  // 분모와 분자의 부호 변경
  if(denom < 0)
  {
    denom = -denom;
    numer = -numer;
  }

  // 최대 공약수로 분자 분모 나누기
  int divisor = gcd(abs(numer), abs(denom));
  numer = numer / divisor;
  denom = denom / divisor;
}

// 분자의 분모의 최대 공약수 찾기
int Fraction::gcd(int n, int m)
{
  int gcd = 1;
  for(int k = 1; k <= n && k <= m; k++)
  {
    if(n % k == 0 && m % k == 0)
    {
      gcd = k;
    }
  }

  return gcd;
}