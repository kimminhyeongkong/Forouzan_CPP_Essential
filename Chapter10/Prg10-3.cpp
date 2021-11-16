// C 문자열을 만들고 입출력 연산자 사용

#include <iostream>
using namespace std;

int main()
{
  char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // 상수가 아닌 문자열
  const char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // 상수 문자열을
  // 문자열 리터럴로 상수 문자열 만들기
  const char* str3 = "Goodbye";
  const char* str4 = "Goodbye\0 my friend";

  // 문자열 출력
  cout << "str1: " << str1 << endl;
  cout << "str2: " << str2 << endl;
  cout << "str3: " << str3 << endl;
  cout << "str4: " << str4 << endl << endl;

  // 다섯 번째 문자열 입력 후 출력
  char str5[20];
  cout << "str5의 값을 입력하세요: ";
  // 추출 연산자는 공백이 나타나면 추출을 멈춤
  cin >> str5;
  cout << "str5: " << str5 << endl; 

  return 0;
}