// 중복 문자 제거

#include <iostream>
#include <string>
using namespace std;

void RemoveOverlappedChar(string& str);

int main()
{
  string str;

  cout << "문자열을 입력: ";
  getline(cin, str);

  RemoveOverlappedChar(str);

  cout << "중복 문자 제거" << endl;
  cout << str << endl;
}

// 중복 문자 제거 함수
// 처음 나오는 문자 빼고 뒤에 나오는 중복 문자 제거
void RemoveOverlappedChar(string& _str)
{
  for(int i = 0; i < _str.size(); i++)
  {
    for(int j = i + 1; j < _str.size(); j++)
    {
      if(_str.at(i) == _str.at(j))
      {
        _str.erase(j, 1);
        j--;
      }
    } 
  }
}