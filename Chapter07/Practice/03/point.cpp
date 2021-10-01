#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;

Point::Point(int x, int y)
: xPos(x), yPos(y)
{
}

Point::~Point()
{
}

// 점의 좌표를 출력
void Point::Print() const
{
  cout << "(" << xPos << ", " << yPos << ")" << endl;
}

// 현재 객체가 매개 변수로 주어진 점의 왼쪽 오른쪽, 위 아래 어디에 있는지 출력
void Point::GetPosDirection(Point point) const
{
  // 왼쪽 or 오른쪽
  if(xPos > point.xPos) // 현재 객체가 매개변수로 주어진 객체보다 오른쪽에 있으면
  {
    cout << "오른쪽";
  }
  else
  {
    cout << "왼쪽";
  }

  // 위 or 아래
  if(yPos > point.yPos) // 현재 객체가 매개변수로 주어진 객체보다 위에 있으면
  {
    cout << "위" << endl;
  }
  else
  {
    cout << "아래" << endl;
  }
}

// 매개 변수로 주어진 점과의 거리를 리턴
double Point::GetDistance(Point point) const
{
  double distance;
  distance = sqrt(pow((point.xPos - xPos), 2) + pow((point.yPos - yPos), 2));

  return distance;
}