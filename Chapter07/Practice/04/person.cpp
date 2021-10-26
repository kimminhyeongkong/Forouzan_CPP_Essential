#include "person.h"

Person::Person(char parName, int parAge)
: name(parName), age(parAge)
{
}

Person::~Person()
{
}

// getter
char Person::GetName() const
{
  return name;
}

int Person::GetAge() const
{
  return age;
}

// setter
void Person::SetName(char parName)
{
  name = parName;
}

void Person::SetAge(int parAge)
{
  age = parAge;
}