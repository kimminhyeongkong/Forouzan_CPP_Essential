// C 문자열의 길이 => 널 문자 제외

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // 문자열 선언
  const char* str1 = "Hello my friends.";
  char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};

  // 문자열의 길이 출력
  cout << "str1의 길이: " << strlen(str1) << endl;
  cout << "str2의 길이: " << strlen(str2) << endl;

  return 0;
}