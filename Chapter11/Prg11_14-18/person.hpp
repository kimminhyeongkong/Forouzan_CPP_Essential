#ifndef PERSON_H

#define PERSON_H
#include "date.hpp" // 연관

class Person
{
  private:
    long identity;
    Date birthDate; // 연관 - 소유
  public:
    Person(long identity, Date birthDate);
    ~Person();
    void print() const;
};

#endif