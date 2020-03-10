// interface file

#ifndef _POINT_HPP_
#define _POINT_HPP_

#include <iostream>

using namespace std;


class Point{
private:
  int x,y;

public:
  Point();
  Point(int x0,int y0);

  void setx(int x0);
  void sety(int y0);
  int gety();
  int getx();
  /*prefix*/
  Point operator++(){
    x = x + 1;
    y = y + 1;
    return *this;
  }
  /*sufix*/
  Point operator++(int){
    Point aux(x,y);
    x = x + 1;
    y = y + 1;
    return aux;
  }
};

//operators
bool operator==(Point a, Point b);
Point operator+(Point a,Point b);
Point operator-(Point a,Point b);
ostream& operator<<(ostream &os, Point &z);

#endif // _POINT_HPP_
