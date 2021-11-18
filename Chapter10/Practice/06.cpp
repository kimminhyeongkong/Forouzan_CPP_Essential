// 매개변수로 문자열 3개 입력 받고
// 첫 번째 문자열에서 두 번째 문자열을 찾은 후 세 번째 문자열로 교체

#include <iostream>
#include <string>
using namespace std;

void FindAndChangeString(string&, string&, string&);

int main()
{
  string str1, str2, str3;

  cout << "문자열 입력: ";
  getline(cin, str1);
  cout << "찾을 문자열 입력: ";
  getline(cin, str2);
  cout << "바꿀 문자열 입력: ";
  getline(cin, str3);


}

void FindAndChangeString(string& _str1, string& _str2, string& _str3)
{
  unsigned int startIdx, endIdx;
  bool foundStartIdx = false;

  // find_not_of 함수로 단어 시작 위치 찾고
  // find_first_of 함수로 단어 끝 위치 찾기

  for(int i = 0; i < _str2.size(); i++)
  {
    for(int j = 0; j < _str1.size(); j++)
    {
      if(_str1[j] == _str2[i] && foundStartIdx == false)
      {
        startIdx = j;
        foundStartIdx = true;
      }

      if(foundStartIdx == true)
      {
        
      }
    }
  }
}