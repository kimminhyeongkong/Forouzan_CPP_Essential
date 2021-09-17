// long과 long long의 최대, 최솟값을 찾는 프로그램

#include <iostream>
#include <limits>
using namespace std;

int main()
{
  cout << "long 자료형의 최댓값: " << numeric_limits<long>::max() << endl;
  cout << "long 자료형의 최솟값: " << numeric_limits<long>::min() << endl;

  cout << "long long 자료형의 최댓값: " << numeric_limits<long long>::max() << endl;
  cout << "long long 자료형의 최솟값: " << numeric_limits<long long>::min() << endl;

  return 0;
}