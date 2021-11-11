// 힙 메모리에 크기 유동적인 배열 만들고 포인터로 요소에 접근

#include <iostream>
using namespace std;

int main()
{
  // 스택에 배열에 대한 크기와 포인터 선언
  int size;
  int* pArray;

  do
  {
    cout << "0보다 큰 배열의 크기를 입력하세요: ";
    cin >> size;
  } while(size <= 0);

  // 힙에 배열 생성
  pArray = new int[size];

  for(int i = 0; i < size; i++)
  {
    cout << i << "번째 요소의 값을 입력하세요: ";
    cin >> *(pArray + i);
  }

  cout << "배열 내부의 요소: " << endl;
  for(int i = 0; i < size; i++)
  {
    cout << *(pArray + i) << "    ";
  }

  // 힙에서 배열 제거
  delete[] pArray;

  return 0;
}