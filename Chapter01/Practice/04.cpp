// 시간, 분, 초 단위로 시간을 입력받아서 초 단위로 환산해 출력하는 프로그램

#include <iostream>
using namespace std;

int main()
{
  unsigned int hour, min, sec;
  unsigned int totalSec;

  cout << "시간을 입력하세요: ";
  cin >> hour;
  cout << "분을 입력하세요: ";
  cin >> min;
  cout << "초를 입력하세요: ";
  cin >> sec;

  totalSec = hour * 3600 + min * 60 + sec;

  cout << "초 단위로 환산: " << totalSec << endl;

  return 0;
}