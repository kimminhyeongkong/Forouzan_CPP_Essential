#include "name.hpp"

Name::Name(string fst, string i, string lst)
: first(fst), init(i), last(lst)
{
  assert(init.size() == 1);
  toupper(first[0]);
  toupper(init[0]);
  toupper(last[0]);
}

Name::~Name()
{
}

void Name::print() const
{
  cout << "직원 이름: " << first << " " << init << ".";
  cout << last << endl;
}