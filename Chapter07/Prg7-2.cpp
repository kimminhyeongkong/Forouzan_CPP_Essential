// 객체 지향 프로그래밍에서 클래스를 사용하는 예 - 생성자, 소멸자

#include <iostream>
using namespace std;

// 클래스 정의
// 데이터 멤버, 멤버 함수
// 매개변수 생성자, 기본 생성자, 복사 생성자, 소멸자
class Circle
{
  private:
    double radius;
  public:
    Circle(double radius); // 매개변수 생성자
    Circle(); // 기본 생성자
    Circle(const Circle& circle); // 복사 생성자
    ~Circle();  // 소멸자

    void setRadius(double radius);  // 설정자
    double getRadius() const; // 접근자
    double getArea() const; // 접근자
    double getPerimeter() const;  // 접근자
};

// 멤버 함수 정의
// 생성자, 소멸자 정의

// 매개변수 생성자 정의
Circle::Circle(double rds)
: radius(rds) // 초기화 리스트. 데이터 멤버인 radius의 값을 매개변수 rds로 초기화
{
  cout << "매개변수가 있는 생성자가 호출되었습니다." << endl;
}

// 기본 생성자 정의
Circle::Circle()
: radius(0.0)
{
  cout << "기본 생성자가 호출되었습니다." << endl;
}

// 복사 생성자의 정의
Circle::Circle(const Circle& circle)
: radius(circle.radius)
{
  cout << "복사 생성자가 호출되었습니다." << endl;
}

// 소멸자의 정의
Circle::~Circle()
{
  cout << "소멸자가 호출되었습니다." << radius;
  cout << endl;
}

// 멤버 함수 정의
void Circle::setRadius(double value)
{
  radius = value;
}

double Circle::getRadius() const
{
  return radius;
}

double Circle::getArea() const
{
  const double PI = 3.14;
  return (PI * radius * radius);
}

double Circle::getPerimeter() const
{
  const double PI = 3.14;
  return (2 * PI * radius);
}

// 애플리케이션
// 객체 3개 만든 후 멤버 함수 호출
int main()
{
  // circle1 인스턴스화 후 멤버 함수 호출
  Circle circle1(5.2);  // 매개변수 생성자 이용
  cout << "Radius: " << circle1.getRadius() << endl;
  cout << "Area: " << circle1.getArea() << endl;
  cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;;

  // circle2 인스턴스화 후 멤버 함수 호출
  Circle circle2(circle1);  // 복사 생성자 이용
  cout << "Radius: " << circle2.getRadius() << endl;
  cout << "Area: " << circle2.getArea() << endl;
  cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;

  // circle1 인스턴스화 후 멤버 함수 호출
  Circle circle3;  // 기본 생성자 이용
  cout << "Radius: " << circle3.getRadius() << endl;
  cout << "Area: " << circle3.getArea() << endl;
  cout << "Perimeter: " << circle3.getPerimeter() << endl << endl;

  // 소멸자 호출 시점
  return 0;
}