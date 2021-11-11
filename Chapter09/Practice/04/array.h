#ifndef ARRAY_H
#define ARRAY_H

class Array
{
  private:
    int capacity;
    int size = 0; // 의미있는 데이터의 개수
    int* arr;

  public:
    Array(int capacity);
    ~Array();

  public:
    void Insert();
    void Print();
};


#endif