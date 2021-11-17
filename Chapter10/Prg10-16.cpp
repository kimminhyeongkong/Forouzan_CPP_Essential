// 첨자 연산자를 통해 문자를 대문자로 변경

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string line;

  cout << "한 줄을 입력하세요: " << endl;
  getline(cin, line);
  for(int i = 0; i < line.size(); i++)
  {
    line[i] = toupper(line[i]);
  }

  cout << line << endl;

  return 0;
}