// 배열 요소를 포인터로 다루는 것을 확인하는 프로그램

#include <iostream>
using namespace std;

int main()
{
  // 5개의 int 자료형을 갖는 배열
  int arr[5];

  // 포인터 연산과 & 연산자로 주소 출력
  for(int i = 0; i < 5; i++)
  {
    // &arr[i] == arr+i
    // arr[i] == *(arr+i)
    cout << "포인터 연산을 사용한 주소: " << i;
    cout << arr + i << endl;
    cout << "& 연산자를 사용한 주소: " << i;
    cout << &arr[i] << endl << endl;
  }

  return 0;
}