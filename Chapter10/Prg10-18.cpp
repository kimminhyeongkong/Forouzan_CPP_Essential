// 문자열에서 서브 문자열 추출해서 출력

#include <iostream>
#include <string>
using namespace std;

int main()
{
  // 문자열 생성
  string strg("The C++ language is fun to work with.");

  // 서브 문자열 추출
  cout << strg.substr(8) << endl; // 8번 인덱스부터 끝까지 추출
  cout << strg.substr(4, 12) << endl; // 4번 인덱스부터 12개 문자 추출

  return 0;
}