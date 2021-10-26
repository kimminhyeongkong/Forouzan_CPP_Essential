// 여러 Student 객체를 생성하고, 이름, 성적, 학점 출력

#include "student.h"

int main()
{
  Student students[5];

  students[0] = Student("George", 82);
  students[1] = Student("John", 73);
  students[2] = Student("Luci", 91);
  students[3] = Student("Mary", 72);
  students[4] = Student("Sue", 65);

  // 이름, 성적, 학점 출력
  for(int i = 0; i < 5; i++)
  {
    students[i].print();
  }

  return 0;
}