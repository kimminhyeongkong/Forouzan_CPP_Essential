// Fraction 클래스를 정의하는 헤더 파일

#include<iostream>
using namespace std;

// FRACTION_H 플래그가 정의되어있지 않으면 7번 줄로, 정의 되어있으면 #endif로
#ifndef FRACTION_H  
#define FRACTION_H

class Fraction
{
  // 데이터 멤버
  private:
    int numer;  // 분자
    int denom;  // 분모
  public:
    // 생성자
    Fraction(int num, int den);
    Fraction();
    Fraction(const Fraction& fract);
    ~Fraction();
    // 접근자
    int getNumer() const;
    int getDenom() const;
    void print() const;
    // 설정자
    void setNumer(int num);
    void setDenom(int den);

  // private 보조 멤버 함수
  private:
    void normalize();
    int gcd(int n, int m);
};

#endif