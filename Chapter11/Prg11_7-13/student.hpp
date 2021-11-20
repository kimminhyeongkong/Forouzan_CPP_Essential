#ifndef STUDENT_H
#define STUDENT_H

#include "person.hpp"

class Student : public Person
{
  private:
    string name;
    double gpa;
  public:
    Student(string name, double gpa);
    ~Student();
    void print() const;
};

#endif