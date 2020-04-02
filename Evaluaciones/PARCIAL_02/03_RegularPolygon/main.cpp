#include <iostream>
#include "polygon.hpp"
using namespace std;


int main() {
  RegularPolygon polya(4,1);
  RegularPolygon polyb(3,1);
  RegularPolygon polye(4,2);

  RegularPolygon polyc = polya + polyb;
  cout << polyc.get_n_sides() << " , " << polyc.get_side_len() << endl;

  RegularPolygon polyd = 3 * polyb;
  cout << polyd.get_n_sides() << " , " << polyd.get_side_len() << endl;

  cout << "Area: " << polye.area() << endl;

  return 0;
}
