// float와 double의 최대, 최솟값을 찾는 프로그램

#include <iostream>
#include <limits>
using namespace std;

int main()
{
  cout << "float 자료형의 최댓값: " << numeric_limits<float>::max() << endl;
  cout << "float 자료형의 최솟값: " << numeric_limits<float>::min() << endl;

  cout << "double 자료형의 최댓값: " << numeric_limits<double>::max() << endl;
  cout << "double 자료형의 최솟값: " << numeric_limits<double>::min() << endl;

  return 0;
}