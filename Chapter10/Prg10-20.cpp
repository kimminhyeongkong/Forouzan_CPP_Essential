// 함수를 이용하여 문자열을 비교하는 프로그램

#include <iostream>
#include <string>
using namespace std;

int main()
{
  // 문자열 선언
  string strg1("Hello my friends");
  string strg2("Hello friends");

  // C++ 문자열끼리 비교
  cout << strg1 << "와 " << strg2 << " 비교하기: ";
  cout << strg1.compare(strg2) << endl; // strg1와 strg2 전체 비교

  // C++ 문자열의 일부 비교
  cout << "Hello와 Hello 비교하기: ";
  cout << strg1.compare(0, 5, strg2, 0, 5) << endl;
  
  // C++ 문자열과 C 문자열 비교
  cout << "Hello와 Hello 비교하기: "; // 값이 0 or 양수 or 음수인지 주목
  cout << strg1.compare(0, 5, strg2) << endl;

  // C++ 문자열과 C 문자열의 일부 비교
  cout << "Hel와 Hell 비교하기: ";
  cout << strg2.compare(0, 3, "Hello", 4);

  return 0;
}