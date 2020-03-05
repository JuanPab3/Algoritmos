#include <iostream>

using namespace std;

class Point{
private:
  int x,y;

public:
  //Constructors
  Point(){
    x = 0;
    y = 0;
  }
  Point(int x0,int y0){
    x = x0;
    y = y0;
  }

  //Setters  or modifiers
  void setx(int x0){
    x = x0;
  }
  void sety(int y0){
    y = y0;
  }

  //Getters or accesors
  int gety(){
    return y;
  }
  int getx(){
    return x;
  }
};

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


int main() {

  Point pt1(5,-9),pt2(-5,9),pt3 = pt1 - pt2;

  cout << pt1 << "-" << pt2 << "=" << pt3 << endl;

  return 0;
}

void printPoint(Point pt){
  cout << " (" << pt.getx() << "," << pt.gety() << ") ";
}
