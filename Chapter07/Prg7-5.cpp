// 객체를 만들고, 만들어진 객체의 수를 세는 프로그램

#include <iostream>
using namespace std;

class Rectangle
{
    private:
      double length; // 인스턴스 데이터 멤버
      double height; // 인스턴스 데이터 멤버
      static int count; // 정적 데이터 멤버
    public:
      Rectangle(double length, double height);  // 매개변수 생성자
      Rectangle();  // 기본 생성자
      ~Rectangle(); // 소멸자
      Rectangle(const Rectangle& rect); // 복사 생성자
      static int getCount();  // 정적 멤버 함수
};

int Rectangle::count = 0; // 정적 데이터 멤버 초기화

// 인스턴스 멤버 함수 정의

// 매개변수가 있는 생성자
Rectangle::Rectangle(double len, double hgt)
: length(len), height(hgt)
{
  count++;  // 객체 수 +1
}

// 기본 생성자
Rectangle::Rectangle()
: length(0.0), height(0.0)
{
  count++;
}

// 복사 생성자
Rectangle::Rectangle(const Rectangle& rect)
: length(rect.height), height(rect.height)
{
  count++;
}

// 소멸자
Rectangle::~Rectangle()
{
  count--;
}

// 정적 멤버 함수 정의
int Rectangle::getCount()
{
  return count;
}

// Rectangle 객체를 만들고 수를 세는 애플리케이션
int main()
{
  {
    Rectangle rect1(3.2, 1.2);  // 매개변수 생성자로 객체 생성
    Rectangle rect2(1.5, 2.1);
    Rectangle rect3;  // 기본 생성자로 객체 생성
    Rectangle rect4(rect1); // 복사 생성자로 객체 생성
    Rectangle rect5(rect2);

    cout << "객체의 수: " << rect5.getCount() << endl;
  }

  cout << "객체의 수: " << Rectangle::getCount() << endl; // 클래스의 정적 멤버 함수 호출

  return 0;
}