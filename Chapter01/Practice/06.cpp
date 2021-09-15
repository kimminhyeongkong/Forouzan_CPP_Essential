// 정사각형의 한 변이 주어졌을 때 면적과 둘레를 구하는 프로그램

#include <iostream>
using namespace std;

int main()
{
  unsigned int sideLength;
  unsigned int area, perimeter;

  cout << "정사각형의 한 변의 길이를 입력하세요: ";
  cin >> sideLength;

  // 둘레
  perimeter = sideLength * 4;
  // 면적
  area = sideLength * sideLength;

  cout << "둘레: " << perimeter << endl;
  cout << "넓이: " << area << endl;

  return 0;
}