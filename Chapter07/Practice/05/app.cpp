#include "address.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
  Address address1(12345, "A Street", "A City", "A State", 67891);

  cout << "Address: " << address1.GetAddress() << endl;

  return 0;
}