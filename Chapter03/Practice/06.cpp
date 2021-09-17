// 세 자리 정수를 입력받아서 역순으로 출력

#include <iostream>
using namespace std;

int main()
{
  int num;
  int first, second, third;

  cout << "정수를 입력하세요: ";
  cin >> num;

  first = (num % 1000) / 100;
  second = (num % 100) / 10;
  third = num % 10;

  cout << third << second << first << endl;
  
  return 0;
}