#include "student.h"

// 기본 생성자
Student::Student()
{
}

// 매개변수 생성자
Student::Student(string nm, int sc)
: name(nm), score(sc)
{
  char temp[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
  grade = temp[score / 10];
}

// 소멸자
Student::~Student()
{
}

// 출력 멤버 함수
void Student::print()
{
  cout << setw(12) << left << name;
  cout << setw(8) << right << score;
  cout << setw(8) << right << grade << endl;
}