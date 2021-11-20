#include "employee.hpp"

Employee::Employee(string fst, string i, string lst, double sal)
: name(fst, i, lst), salary(sal)
{
  assert(0.0 < salary && salary < 100000.0);
}

Employee::~Employee()
{
}

void Employee::print() const
{
  name.print();
  cout << "급여: " << salary << endl << endl;
}