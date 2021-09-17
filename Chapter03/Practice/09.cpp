// 초 단위(long)를 입력받았을 때, 이를 시, 분, 초 단위로 변환

#include <iostream>
using namespace std;

int main()
{
  unsigned long inputSec;
  unsigned long resultHour, resultMin, resultSec;

  cout << "초를 입력하세요: ";
  cin >> inputSec;

  resultHour = inputSec / 3600;
  resultMin = (inputSec - resultHour * 3600) / 60;
  resultSec = (inputSec - (resultHour * 3600 + resultMin * 60));

  cout << "시: " << resultHour << endl;
  cout << "분: " << resultMin << endl;
  cout << "초: " << resultSec << endl;

  return 0;
}