// getline 함수

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // 문자열 배열 선언
  char lines[3][80];

  // 3줄 입력받기
  for(int i = 0; i < 3; i++)
  {
    cout << "한 줄을 입력하세요: ";
    cin.getline(lines[i], 80);
  }

  // 3줄 출력
  cout << endl;
  cout << "출력: " << endl;
  for(int i = 0; i < 3; i++)
  {
    cout << lines[i] << endl;
  }

  return 0;
}