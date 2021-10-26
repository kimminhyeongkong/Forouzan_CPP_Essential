// 어떤 달의 일 수 찾기

#include <iostream>
using namespace std;

int main()
{
  // 첫 번째 인덱스는 사용 X
  int numberOfDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int month;

  // 입력 유효성 검사
  do
  {
    cout << "월을 입력하세요(1~12): ";
    cin >> month;
  } while(month < 1 || month > 12);

  cout << "해당 월에는 " << numberOfDays[month];
  cout << "개의 일이 있습니다." << endl;

  return 0;
}