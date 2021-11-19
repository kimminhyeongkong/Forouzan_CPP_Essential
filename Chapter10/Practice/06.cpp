// 매개변수로 문자열 3개 입력 받고
// 첫 번째 문자열에서 두 번째 문자열을 찾은 후 세 번째 문자열로 교체
 
#include <iostream>
#include <string>
using namespace std;

string FindString(string, const string, const string);
void InsertString(string&, const string&, unsigned int, unsigned int);

int main()
{
  string str1, str2, str3, replacedStr;

  cout << "문자열 입력: ";
  getline(cin, str1);
  cout << "찾을 문자열 입력: ";
  getline(cin, str2);
  cout << "바꿀 문자열 입력: ";
  getline(cin, str3);

  cout << str1.capacity() << endl;

  replacedStr = FindString(str1, str2, str3);

  cout << "바뀐 문자열(찾는 문자열이 없는 경우 그대로 나옴)" << endl;
  cout << replacedStr << endl;

  return 0;
}

string FindString(string _str1, const string _str2, const string _str3)
{
  bool foundStr2 = false;
  unsigned int startIdx, endIdx;

  // 찾는 과정
  for(int i = 0; i < _str1.size(); i++)
  {
    // _str1의 어떤 문자가 _str2의 첫 번째 문자와 같을 때
    if(_str1.at(i) == _str2.at(0) && foundStr2 == false)
    {
      // i를 시작 위치로 놓고 시작
      startIdx = i;
      for(int j = 0; j < _str2.size(); j++)
      {
        // 인덱스 >= 용적이면 종료
        if(i + j >= _str1.capacity())
        {
          endIdx = i + j;
          break;
        }

        if(_str1.at(i + j) == _str2.at(j))
        {
          foundStr2 = true;
          endIdx = i + j; // for문이 끝날 때까지 break 되지 않는다면 str2와 같은 문자열이 있는 것이므로 마지막 인덱스는 i+j
        }
        else
        {
          // 하나라도 틀리면 str2와 다르므로 false 후 break
          foundStr2 = false;
          break;
        }
      }
    }

    // 문자열을 찾았으면 찾는 과정을 끝냄
    if(foundStr2 == true)
    {
      break;
    }
  }

  if(foundStr2)
  {
    // 함수에서 바꾼 string 리턴
    InsertString(_str1, _str3, startIdx, endIdx);
  }

  return _str1;
}

void InsertString(string& _str1, const string& _str3, unsigned int _startIdx, unsigned int _endIdx)
{
  // _startIdx에서부터 _edxIdx - _startIdx 만큼 삭제
  _str1.erase(_startIdx, (_endIdx - _startIdx) + 1);

  // _startIdx 자리에 _str3 삽입
  _str1.insert(_startIdx, _str3);
}