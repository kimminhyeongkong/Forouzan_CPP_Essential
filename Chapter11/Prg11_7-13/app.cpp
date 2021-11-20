// 애플리케이션 파일

#include "student.hpp"
#include "employee.hpp"

int main()
{
  // Person 클래스
  cout << "Person: " << endl;
  Person person("John");
  person.print();
  cout << endl << endl;

  // Student 클래스
  cout << "Student: " << endl;
  Student student("Mary", 3.9);
  student.print();
  cout << endl << endl;

  // Employee 클래스
  cout << "Employee: " << endl;
  Employee employee("Juan", 78000.00);
  employee.print();
  cout << endl << endl;

  return 0;
}