#ifndef PERSON_H
#define PERSON_H

class Person
{
  private:
    char name;
    int age;
  public:
    // 생성자 & 소멸자
    Person(char parName, int parAge);
    ~Person();

    // getter
    char GetName() const;
    int GetAge() const;

    // setter
    void SetName(char parName);
    void SetAge(int parAge);
};

#endif