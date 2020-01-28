#include <iostream>
#include <list>

void firstLastSwap(std::list<int> & l);

int main() {

  std::list<int> l = {0,1,2,3,4,5,6,7};

  std::cout << "Before:" << std::endl;
  std::cout << "Front: " << l.front() << std::endl;
  std::cout << "Back: " << l.back() << std::endl;
  firstLastSwap(l);
  std::cout << "After:" << std::endl;
  std::cout << "Front: " << l.front() << std::endl;
  std::cout << "Back: " << l.back() << std::endl;

  return 0;
}

void firstLastSwap(std::list<int> & l){
  int front = l.front(), back = l.back();
  l.pop_front(); l.pop_back();
  l.push_back(front); l.push_front(back);
}
