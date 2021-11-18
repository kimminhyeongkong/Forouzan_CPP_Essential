// C++ 문자열에서 특정 문자를 모두 제거하는 함수

#include <iostream>
#include <string>
using namespace std;

void RemoveChar(string&, const char&);

int main()
{
  string str;
  char specificCh;

  cout << "문자열 입력: ";
  getline(cin, str);
  cout << "특정 문자 입력: ";
  cin >> specificCh;

  RemoveChar(str, specificCh);

  cout << "문자 " << specificCh << "를 모두 제거한 결과" << endl;
  cout << str << endl;
}

void RemoveChar(string& _str, const char& _ch)
{
  for(int i = 0; i < _str.size(); i++)
  {
    if(_str.at(i) == _ch)
    {
      // i 번째 인덱스에서 한 글자 지우기
      _str.erase(i, 1);
      // erase 함수를 쓰면 i+1번째 값이 i번째로 들어오기 때문에 i-- 해줘야 함
      i--;
    }
  }
}