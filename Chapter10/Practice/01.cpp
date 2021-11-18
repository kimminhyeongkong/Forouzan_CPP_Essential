// 특정 문자의 수 구하기

#include <iostream>
#include <string>
using namespace std;

// 특정 문자의 수를 구해서 리턴하는 함수
int GetCharCount(string&, const char&);

int main()
{
  string str; // 문자열을 저장할 변수
  char specificCh; // 특정 문자

  cout << "문자열을 입력하세요: ";
  cin >> str;

  cout << "특정 문자를 입력하세요: ";
  cin >> specificCh;

  unsigned int cCount; // 특정 문자 개수
  cCount = GetCharCount(str, specificCh);

  cout << "문자 " << specificCh << "의 개수: " << cCount << endl;

  return 0;
}

int GetCharCount(string& _str, const char& _specificCh)
{
  unsigned int charCount = 0; // 특정 문자 수를 저장할 변수

  for(int i = 0; i < _str.size(); i++)
  {
    // i 번째 인덱스에 있는 문자와 특정 문자를 비교
    if(_str.at(i) == _specificCh)
    {
      charCount++;
    }
  }

  return charCount;
}