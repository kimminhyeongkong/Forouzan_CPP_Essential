// Person 클래스 인터페이스 파일

#ifndef PERSON_H

#define PERSON_H
#include <cassert>
#include <iostream>
#include <iomanip>
using namespace std;

class Person
{
  private:
    long identity;
  public:
    Person();
    Person(long indentity);
    ~Person();
    Person(const Person& person);
    void print() const;
};

#endif