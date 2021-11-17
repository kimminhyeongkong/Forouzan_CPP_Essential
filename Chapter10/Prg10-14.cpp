// getline 함수 사용

#include <iostream>
#include <string>
using namespace std;

int main()
{
  // 빈 문자열 생성
  string strg;
  
  // 한 줄 읽어 들이기
  cout << "한 줄 입력: " << endl;
  getline(cin, strg);
  cout << strg << endl << endl;

  // 여러 줄 입력받기
  cout << "여러 줄을 입력하세요(종료 때는 $ 입력): " << endl;
  getline(cin, strg, '$');
  cout << strg << endl;

  return 0;
}