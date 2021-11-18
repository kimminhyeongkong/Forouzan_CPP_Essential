// 두 문자열 입력받은 후 공통으로 있는 문자들 리턴

#include <iostream>
#include <string>
using namespace std;

void RemoveOverlappedChar(string&);
void CheckOverlappedChar(string&, string&, string&);

int main()
{
  string str1, str2, overlappedStr;

  cout << "첫 번째 문자열을 입력: ";
  getline(cin, str1);

  cout << "두 번째 문자열을 입력: ";
  getline(cin, str2);

  RemoveOverlappedChar(str1);
  RemoveOverlappedChar(str2);

  int maxStrLength; // 최대 문자열 길이
  if(str1.size() >= str2.size())
  {
    maxStrLength = str1.size();
  }
  else
  {
    maxStrLength = str2.size();
  }

  overlappedStr.reserve(maxStrLength);

  CheckOverlappedChar(str1, str2, overlappedStr);

  RemoveOverlappedChar(overlappedStr);

  cout << "공통 문자들" << endl;
  cout << overlappedStr << endl;

  return 0;
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

// 중복 문자 확인 함수
void CheckOverlappedChar(string& _str1, string& _str2, string& _overlappedStr)
{
  for(int i = 0; i < _str1.size(); i++)
  {
    for(int j = 0; j < _str2.size(); j++)
    {
      if(_str1.at(i) == _str2.at(j))
      {
        _overlappedStr.push_back(_str1.at(i));
      }
    }
  }
}