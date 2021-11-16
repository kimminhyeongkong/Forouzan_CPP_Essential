// strcmp 함수와 strncmp 함수로 문자열 비교

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // C 문자열 생성
  const char* str1 = "Hello Alice.";
  const char* str2 = "Hello John.";
  const char* str3 = "Hello Besty.";

  // 문자열 전체 비교
  cout << "str1과 str2 비교하기: ";
  cout << strcmp(str1, str2) << endl;
  cout << "str2과 str3 비교하기: ";
  cout << strcmp(str2, str3) << endl;

  // 앞의 5문자만 비교
  cout << "str1과 str2의 앞 5문자만 비교하기: ";
  cout << strncmp(str1, str2, 5) << endl;

  return 0;
}