// C++ 문자열의 모든 문자를 대문자로 변환하기

#include <iostream>
#include <string>
using namespace std;

void StringUpper(string& _str);

int main()
{
  string str;

  cout << "문자열을 입력하세요: ";
  getline(cin, str);

  StringUpper(str);

  cout << "모든 문자를 대문자로 바꾼 문자열" << endl;
  cout << str << endl;

  return 0;
}

void StringUpper(string& _str)
{
  for(int i = 0; i < _str.size(); i++)
  {
    // _str에 있는 모든 소문자를 대문자로 바꾸기
    _str.at(i) = toupper(_str.at(i));
  }
}