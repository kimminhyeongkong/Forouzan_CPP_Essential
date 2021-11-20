// Person 클래스의 구현 파일
#include "person.hpp"

// Person 클래스 생성자
Person::Person(string nm)
: name(nm)
{
}

// Person 클래스 소멸자
Person::~Person()
{
}

// print 멤버 함수 정의
void Person::print() const
{
  cout << "이름: " << name << endl;
}