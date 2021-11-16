// strtok 함수로 날짜 형식 추출

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // 문자열과 포인터
  char str[] = "2021년 11월 17일";
  char* p;

  // 단어 추출
  p = strtok(str, " ");
  while(p)
  {
    cout << p << endl;
    p = strtok(0, " ");
  }

  return 0;
}