// 포인터로 전달을 이용해 함수로 전달한 두 값을 스왑

#include <iostream>
using namespace std;

void swap(int* first, int* second); // 프로토타입

int main()
{
  // 변수 두 개 정의
  int x = 10;
  int y = 20;

  // 스왑하기 전 값 출력
  cout << "스왑하기 전 x와 y의 값" << endl;
  cout << "x: " << x << "   " << "y: " << y << endl;

  // swap 함수를 호출해서 스왑
  swap(&x, &y);

  // 스왑한 후 값 출력
  cout << "스왑한 후 x와 y의 값" << endl;
  cout << "x: " << x << "   " << "y: " << y << endl;

  return 0;
}

void swap(int* pX, int* pY)
{
  int temp = *pX;
  *pX = *pY;
  *pY = temp;
}