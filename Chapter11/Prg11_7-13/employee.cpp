// Employee 클래스 구현파일

#include "employee.hpp"

// 생성자
Employee::Employee(string nm, double sa)
: Person(nm), salary(sa)
{
}

// 소멸자
Employee::~Employee()
{
}

// print 멤버 함수
void Employee::print() const
{
  Person::print();
  cout << "급여: " << salary << endl;
}