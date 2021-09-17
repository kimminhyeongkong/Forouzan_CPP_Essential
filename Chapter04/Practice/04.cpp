// 차량의 종류에 따라 주차 요금을 계산하는 프로그램
// 승용차: 시간 당 2달러, 버스: 시간 당 3달러, 트럭: 시간 당 4달러

#include <iostream>

int main()
{
  char vehicleType;
  unsigned int parkTime;
  unsigned int parkFee;

  std::cout << "차량의 종류를 입력하세요: ";
  std::cin >> vehicleType;
  std::cout << "주차 시간을 입력하세요: ";
  std::cin >> parkTime;

  switch(vehicleType)
  {
    // 일반 승용차
    case 'c':
    {
      parkFee = parkTime * 2;
      break;
    }
    // 버스
    case 'b':
    {
      parkFee = parkTime * 3;
      break;
    }
    // 트럭
    case 't':
    {
      parkFee = parkTime * 4;
      break;
    }
  }

  std::cout << "주차 요금: " << parkFee << std::endl;

  return 0;
}