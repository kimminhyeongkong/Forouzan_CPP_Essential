// boolalpha 조정자 사용하기

#include <iostream>
using namespace std;

int main()
{
  bool x = true;
  bool y = false;

  // 조정자 없이 출력(noboolalpha)
  cout << "기본적인 x의 출력: " << x << endl;
  cout << "기본적인 y의 출력: " << y << endl;

  // boolalpha 조정자를 사용하여 출력
  cout << "조정자를 사용한 x의 값: " << boolalpha << x << endl;
  cout << "y의 값: " << y << endl; // 한 번 스트림의 상태가 변경되면, 변경된 상태가 계속 유지된다.

  return 0;
}