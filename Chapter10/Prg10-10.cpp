// strcat, strncat 함수로 문자열 결합하기

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // strcat 함수
  char str1[20] = "This is ";
  const char* str2 = "a string.";
  strcat(str1, str2);
  cout << "str1: " << str1 << endl;

  // strncat 함수
  char str3[20] = "abcdefghijk";
  const char* str4 = "ABCDEFGHIJK";
  strncat(str3, str4, 4);
  cout << "str3: " << str3 << endl;

  return 0;
}