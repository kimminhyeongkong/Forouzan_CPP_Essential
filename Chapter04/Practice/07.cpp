// 물건 하나의 가격, 구매 수량 입력
// 할인이 적용된 전체 가격을 출력

// 할인한 가격을 구할 때, 소수점 아래자리는 무시함

#include <iostream>

int main()
{
  unsigned int itemCount;
  unsigned int itemPrice;
  unsigned int finalPrice;

  std::cout << "물건의 가격을 입력하세요: ";
  std::cin >> itemPrice;
  std::cout << "물건의 수량을 입력하세요: ";
  std::cin >> itemCount;

  if((1 <= itemCount) && (itemCount <= 9))
  {
    finalPrice = itemPrice;
  }
  else if((10 <= itemCount) && (itemCount <= 49))
  {
    finalPrice = itemPrice - (itemPrice/100) * 3;
  }
  else if((50 <= itemCount) && (itemCount <= 99))
  {
    finalPrice = itemPrice - (itemPrice/100) * 5;
  }
  else if(itemCount >= 100)
  {
    finalPrice = itemPrice - (itemPrice/100) * 10;
  }

  std::cout << "할인이 적용된 전체 가격: " << finalPrice;

  return 0;
}