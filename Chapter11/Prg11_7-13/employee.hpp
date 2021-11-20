// Employee 클래스의 헤더 파일

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.hpp"

// Employee 클래스 정의
class Employee : public Person
{
  private:
    string name;
    double salary;
  public:
    Employee(string name, double salary);
    ~Employee();
    void print() const;
};

#endif