// 연산자를 이용하여 문자열 비교

#include <iostream>
#include <string>
using namespace std;

int main()
{
  // 문자열 생성
  string strg1; // C 문자열
  string strg2(5, 'a'); // C++ 문자열
  string strg3("Hello Friends"); // C++ 문자열
  string strg4("Hi People", 4); // C++ 문자열

  // 연산자를 이용해서 비교
  cout << "strg1 < strg2: " << boolalpha << (strg1 < strg2);
  cout << endl;
  cout << "strg2 >= strg3: " << boolalpha << (strg2 >= strg3);
  cout << endl;
  cout << "strg1 == strg2: " << boolalpha << (strg1 == strg2);
  cout << endl;
  cout << "Hi P != strg4: " << boolalpha << ("Hi P" != strg4);
  cout << endl;

  return 0;
}