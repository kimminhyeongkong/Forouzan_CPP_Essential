// 문자열 뒤집기

#include <iostream>
#include <string>
using namespace std;

void reverse(string& strg);

int main()
{
  // 문자열 객체 선언
  string strg;

  // 문자열 입력받고 출력
  cout << "문자열을 입력하세요: ";
  getline(cin, strg);
  cout << "원본 문자열: " << strg << endl;

  // 문자열 뒤집고 출력
  reverse(strg);
  cout << "뒤집은 문자열: " << strg;

  return 0;
}

void reverse(string& strg)
{
  string temp(strg);
  int size = strg.size();

  for(int i = 0; i < size; i++)
  {
    strg[i] = temp[size - 1 - i];
  }
}