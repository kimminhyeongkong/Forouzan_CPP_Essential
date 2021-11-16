// strpbrk 함수로 주어진 문자 집합 중 특정 문자 위치 찾기

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // 문자열 생성
  char str[] = "Hello friends of mine.";

  // 문자 집합 중에서 처음 등장하는 문자 탐색
  char* pPtr = strpbrk(str, "pfmd"); // {'p', 'f', 'm', 'd'} 중 하나
  cout << "찾은 문자: " << *pPtr << endl;
  cout << "해당 문자의 인덱스: " << pPtr - str;

  return 0;
}