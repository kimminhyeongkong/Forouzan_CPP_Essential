// 3개 변수의 값과 주소를 확인

#include <iostream>
using namespace std;

int main()
{
  // 3개 변수 선언
  bool flag = true;
  int score = 92;
  double average = 82.56;

  // flag 변수의 크기, 값, 주소 출력
  cout << "불 자료형의 변수" << endl;
  cout << "크기: " << sizeof(flag) << endl;
  cout << "값: " << flag << endl;
  cout << "주소: " << &flag << endl;

  // score 변수의 크기, 값, 주소 출력
  cout << "int 자료형의 변수" << endl;
  cout << "크기: " << sizeof(score) << endl;
  cout << "값: " << score << endl;
  cout << "주소: " << &score << endl;

  // average 변수의 크기, 값, 주소 출력
  cout << "double 자료형의 변수" << endl;
  cout << "크기: " << sizeof(average) << endl;
  cout << "값: " << average << endl;
  cout << "주소: " << &average << endl;

  return 0;
}