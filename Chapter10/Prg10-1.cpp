// strcpy 함수와 strncpy 함수를 사용해 문자열 복사

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // str2 전체를 str1으로 복사.
  // str1 내용 사라짐
  char str1[] = "This is the first string.";
  char str2[] = "This is the second string.";
  strcpy(str1, str2);
  cout << "str1: " << str1 << endl;

  // str4의 일부를 str3로 복사.
  // str3 일부 내용 제거
  char str3[] = "abcdefghijk.";
  const char* str4 = "ABCDEFGHIJK";
  strncpy(str3, str4, 4); // str3의 앞 4글자를 str4의 앞 4글자로 바꿈
  cout << "str3: " << str3 << endl;

  return 0;
}