// strstr 함수로 서브 문자열 탐색하기

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // 문자열 생성
  char str[] = "Hello friends of mine.";

  // 서브 문자열 위치 탐색
  char* sPtr = strstr(str, "friends");
  cout << "서브 문자열의 시작 인덱스: " << sPtr - str << endl;

  return 0;
}