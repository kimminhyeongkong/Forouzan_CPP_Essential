// 은행 계좌 클래스 선언, 정의, 사용

#include<iostream>
#include<cassert>
using namespace std;

// 클래스 정의
class Account
{
  private:
    long accNumber; // 계좌의 고유 번호
    double balance; // 계좌 잔액
    static int base;  // 계좌의 고유 번호가 될 정적 데이터 멤버
  public:
    Account(double bal);  // 매개변수 생성자
    ~Account(); // 소멸자
    Account(const Account& acc) = delete; // 복사 생성자 만들지 않기
    void checkBalance() const;  // getter -> 값 변경할 수 없게 const
    void deposit(double amount);  // setter
    void withdraw(double amount); // setter
};

int Account::base = 0;  // 정적 데이터 멤버 초기화

// 함수 정의

// 매개변수 생성자
Account::Account(double bal)
:balance(bal)
{
  if(bal < 0.0)
  {
    cout << "잔액은 음수가 될 수 없습니다. 프로그램을 종료합니다." << endl;
    assert(false);
  }
  base++;
  accNumber = 100000 + base;

  cout << "계좌_#" << accNumber << "이 만들어졌습니다." << endl;
  cout << "잔액 $" << balance << endl << endl;
}

// 소멸자
Account::~Account()
{
  cout << "계좌_#" << accNumber << "가 닫혔습니다." << endl;
  cout << "$" << balance << "를 고객에게 보냈습니다." << endl << endl;
}

// 접근자 멤버 함수
void Account::checkBalance() const
{
  cout << "계좌_#" << accNumber << endl;
  cout << "트랜잭션 - 잔액 확인" << endl;
  cout << "잔액: $" << balance << endl << endl;
}

// 설정자 멤버 함수
void Account::deposit(double amount)
{
  if(amount > 0.0)
  {
    balance += amount;
    cout << "계좌_#" << accNumber << endl;
    cout << "트랜잭션: deposit of $" << amount << endl;
    cout << "변경된 잔액: $" << balance << endl << endl;
  }
  else
  {
    cout << "트랜잭션이 중단되었습니다." << endl;
  }
}

// 설정자 멤버 함수
void Account::withdraw(double amount)
{
  if(amount > balance)
  {
    amount = balance;
  }

  balance -= amount;
  cout << "계좌_#" << accNumber << endl;
  cout << "트랜잭션 - 인출: $" << amount << endl;
  cout << "변경된 잔액: $" << balance << endl << endl;
}

// Account 클래스를 사용하는 애플리케이션
int main()
{
  // 계좌 3개 생성
  Account acc1(2000);
  Account acc2(5000);
  Account acc3(1000);

  // 트랜잭션
  acc1.deposit(150);
  acc2.checkBalance();
  acc1.checkBalance();
  acc3.withdraw(800);
  acc1.withdraw(1000);
  acc2.deposit(120);

  return 0;
}