// 한 줄의 문자열 내부에서 단어들을 찾아 출력

#include <iostream>
#include <string>
using namespace std;

int main()
{
  // 변수 선언
  string text, word;
  string delimiter(" \n"); // 공백과 개행문자
  string::size_type wStart, wEnd;
  string::size_type npos;

  // 한 줄 입력받기
  cout << "한 줄을 입력하세요: ";
  getline(cin, text);
  cout << endl;

  // 문자 탐색하고 단어 추출
  cout << "추출한 단어: ";
  wStart = text.find_first_not_of(delimiter, 0); // 0번 인덱스부터 포함 X 문자 찾기 시작

  while(wStart < npos)
  {
    wEnd = text.find_first_of(delimiter, wStart);
    cout << text.substr(wStart, wEnd - wStart) << endl;
    wStart = text.find_first_not_of(delimiter, wEnd);
  }

  return 0;
}