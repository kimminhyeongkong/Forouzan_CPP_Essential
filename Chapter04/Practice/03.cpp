// 사용자로부터 1~12 사이의 수를 입력받고 해당 월을 영어로 출력

#include <iostream>

int main()
{
  unsigned int month;

  std::cout << "월(1~12)을 입력하세요: ";
  std::cin >> month;

  switch(month)
  {
    case 1:
      std::cout << "January" << std::endl;
      break;
    case 2:
      std::cout << "February" << std::endl;
      break;
    case 3:
      std::cout << "March" << std::endl;
      break;
    case 4:
      std::cout << "April" << std::endl;
      break;
    case 5:
      std::cout << "May" << std::endl;
      break;
    case 6:
      std::cout << "June" << std::endl;
      break;
    case 7:
      std::cout << "July" << std::endl;
      break;
    case 8:
      std::cout << "August" << std::endl;
      break;
    case 9:
      std::cout << "September" << std::endl;
      break;
    case 10:
      std::cout << "October" << std::endl;
      break;
    case 11:
      std::cout << "November" << std::endl;
      break;
    case 12:
      std::cout << "December" << std::endl;
      break;
    default:
      std::cout << "잘못 입력했습니다." << std::endl;
      break;
  }

  return 0;
}