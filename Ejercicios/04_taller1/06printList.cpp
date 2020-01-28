#include<iostream>
#include<list>
#include<cmath>

void ListpowX(int x, int n, std::list<int> & l);
void printNdRemove(std::list<int> & l);

int main(){
  /*a*/
  std::list<int> l;
  ListpowX(10, 3, l);
  printNdRemove(l);
  return 0;
}

void printNdRemove(std::list<int> & l){
  while (!(l.empty())) {
    std::cout << l.front() << std::endl;
    l.pop_front();
  }
}

void ListpowX(int x, int n, std::list<int> & l) {
/*
 * Con está función se crea una lista con x elementos
 * consecutivos multiplos de n.
 */
  for(int i = 0; i <= x; ++i){
    int a = pow(n,i);
    l.push_back(a);
  }
}
