#ifndef POINT_H
#define POINT_H

class Point
{
  private:
    int xPos;
    int yPos;
  public:
    Point(int x, int y);
    ~Point();
    void Print() const;
    void GetPosDirection(Point point) const;
    double GetDistance(Point point) const;
};

#endif