#include <iostream>
#include "person.h"

using namespace std;

int main()
{
  Person person1('A', 20);

  cout << "변경 전" << endl;
  cout << "이름: " << person1.GetName() << ", 나이: " << person1.GetAge() << endl << endl;

  person1.SetName('B');
  person1.SetAge(25);

  cout << "변경 후" << endl;
  cout << "이름: " << person1.GetName() << ", 나이: " << person1.GetAge() << endl << endl;

  return 0;
}