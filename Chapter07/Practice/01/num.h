#ifndef NUM_H
#define NUM_H

class One
{
  private:
    int x;
    int y;
  public:
    One(int x, int y);
    ~One();
    int getX() const;
    int getY() const;
};

#endif