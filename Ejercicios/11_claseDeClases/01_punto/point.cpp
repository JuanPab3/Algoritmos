//Implementation
#include "point.hpp"

//Constructors
Point::Point(){
  x = 0;
  y = 0;
}
Point::Point(int x0,int y0){
  x = x0;
  y = y0;
}

//Setters  or modifiers
void Point::setx(int x0){
  x = x0;
}
void Point::sety(int y0){
  y = y0;
}
//Getters or accesors
int Point::gety(){
  return y;
}
int Point::getx(){
  return x;
}

bool operator==(Point a, Point b){
  bool x = a.getx() == b.getx();
  bool y = a.gety() == b.gety();
  return x and y;
}

Point operator+(Point a,Point b){
  Point res;
  res.setx(a.getx() + b.getx());
  res.sety(a.gety() + b.gety());

  return res;
}

Point operator-(Point a,Point b){
  Point res;
  res.setx(a.getx() - b.getx());
  res.sety(a.gety() - b.gety());

  return res;
}

ostream& operator<<(ostream &os, Point &z){
  os << " (" << z.getx() << "," << z.gety() << ") ";
  return os;
}
