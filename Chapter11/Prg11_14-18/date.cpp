#include "date.hpp"

Date::Date(int m, int d, int y)
: month(m), day(d), year(y)
{
  if((month < 1) || (month > 12))
  {
    cout << "Month is out of range." << endl;
    assert(false);
  }

  int daysInMonths[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if((day < 1) || (day > daysInMonths[month]))
  {
    cout << "Day is out of range." << endl;
    assert(false);
  }

  if((year < 1900) || (day > 2099))
  {
    cout << "Year is out of range." << endl;
    assert(false);
  }
}

Date::~Date()
{
}

void Date::print() const
{
  cout << month << "/" << day << "/" << year << endl;
}