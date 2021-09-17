// 4개의 숫자를 입력받아 합을 출력

#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3, num4;
  int sum;

  cout << "4개의 숫자를 입력하세요: ";
  cin >> num1;
  cin >> num2;
  cin >> num3;
  cin >> num4;

  sum = num1 + num2 + num3 + num4;

  cout << "네 숫자의 합: " << sum << endl;

  return 0;
}