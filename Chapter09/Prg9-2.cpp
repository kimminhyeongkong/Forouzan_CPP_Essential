// 참조로 전달을 사용해서
// 함수로 전달한 2개의 값을 스왑

#include <iostream>
using namespace std;

void swap(int& first, int& second); // function prototype

int main()
{
  // 변수 2개 정의
  int x = 10;
  int y = 20;

  // 스왑하기 전에 x와 y의 값 출력
  cout << "스왑하기 전의 x와 y의 값" << endl;
  cout << "x: " << x << "  " << "y: " << y << endl;
  
  // x와y 스왑
  swap(x, y);

  // 스왑 후 x와 y의 값 출력
  cout << "스왑 후의 x와 y의 값" << endl;
  cout << "x: " << x << "  " << "y: " << y << endl;

  return 0;
}

// 매개변수로 전달된 값을 스왑하는 함수
// pass by reference 이용
void swap(int& rX, int& rY)
{
  int temp = rX;
  rX = rY;
  rY = temp;
}