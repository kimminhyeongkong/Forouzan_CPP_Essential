#include <iostream>
#include <cassert>
using namespace std;

class Rectangle
{
  private:
    double length;  // 데이터 멤버
    double height;  // 데이터 멤버
  public:
    Rectangle(double length, double height);  // 매개변수 생성자
    Rectangle(const Rectangle& rect); // 복사 생성자
    ~Rectangle(); // 소멸자
    void print() const; // 접근자
    double getArea() const; // 접근자
    double getPerimeter() const;  // 접근자
};

// 매개변수 생성자
Rectangle::Rectangle(double len, double hgt)
: length(len), height(hgt)
{
  // 불변 속성
  if((length <= 0.0) || (height <= 0.0))
  {
    cout << "Rectangle 객체를 생성할 수 없습니다." << endl;
    assert(false);
  }
}

// 복사 생성자
Rectangle::Rectangle(const Rectangle& rect)
: length(rect.length), height(rect.height)
{
}

// 소멸자
Rectangle::~Rectangle()
{
}

// 접근자 멤버 함수
void Rectangle::print() const
{
  cout << "사각형의 너비: " << length << ", 높이: " << height << endl;
}

double Rectangle::getArea() const
{
  return length * length;
}

double Rectangle::getPerimeter() const
{
  return 2 * (length + height);
}

// 애플리케이션
int main()
{
  // 객체 인스턴스화
  Rectangle rect1(3.0, 4.2);  // 매개변수 생성자
  Rectangle rect2(5.1, 10.2); // 매개변수 생성자
  Rectangle rect3(rect2); // 복사 생성자

  // 첫 번째 객체
  cout << "사각형 1: ";
  rect1.print();
  cout << "넓이: " << rect1.getArea() << endl;
  cout << "둘레: " << rect1.getPerimeter() << endl << endl;

  // 두 번째 객체
  cout << "사각형 2: ";
  rect2.print();
  cout << "넓이: " << rect2.getArea() << endl;
  cout << "둘레: " << rect2.getPerimeter() << endl << endl;

  // 세 번째 객체
  cout << "사각형 3: ";
  rect3.print();
  cout << "넓이: " << rect3.getArea() << endl;
  cout << "둘레: " << rect3.getPerimeter() << endl << endl;

  return 0;
}