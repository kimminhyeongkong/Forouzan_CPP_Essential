#ifndef TWO_H
#define TWO_H

class Two
{
  private:
    int x;
    char a;
  public:
    // 생성자
    Two(int x, char a);

    // 소멸자
    ~Two();

    // getter
    int getX() const;
    char getA() const;

    // setter
    void setX(int num);
    void setA(char character);
};

#endif