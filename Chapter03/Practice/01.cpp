// short와 unsigned int의 최대, 최솟값을 찾는 프로그램

#include <iostream>
#include <limits>
using namespace std;

int main()
{
  cout << "short 자료형의 최댓값: " << numeric_limits<short int>::max() << endl;
  cout << "short 자료형의 최솟값: " << numeric_limits<short int>::min() << endl;

  cout << "unsigned int 자료형의 최댓값: " << numeric_limits<unsigned int>::max() << endl;
  cout << "unsigned int 자료형의 최솟값: " << numeric_limits<unsigned int>::min() << endl;

  return 0;
}