// 입력 조정자

#include <iostream>
using namespace std;

int main()
{
  bool flag;

  // 조정자를 사용해 입력받기
  cout << "불 자료형을 true 또는 false로 입력: ";
  cin >> boolalpha >> flag;

  cout << flag << endl;

  return 0;
}