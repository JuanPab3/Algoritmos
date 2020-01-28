#include <iostream>
#include <list>

int listaSuma(std::list<int> & l);

int main() {

  std::list<int> l = {1,2,3,4,5,6};
  std::cout << listaSuma(l) << std::endl;

  return 0;
}


int listaSuma(std::list<int> & l){
  int total = 0;
  while (!(l.empty())) {
    total += l.front();
    l.pop_front();
  }
  return total;
}
