#include <iostream>
#include "point.hpp"

using namespace std;

int main() {
  cout << boolalpha;
  Point pt1(5,-9),pt2(-5,9),pt3 = pt1 - pt2;

  cout << pt1 << "-" << pt2 << "=" << pt3 << endl;
  ++pt1;
  ++pt2;
  pt3 = pt1 - pt2;
  cout << pt1 << "-" << pt2 << "=" << pt3 << endl;

  return 0;
}
