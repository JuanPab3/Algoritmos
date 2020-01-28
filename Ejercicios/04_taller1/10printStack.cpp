#include<iostream>
#include<stack>
#include<cmath>

void ListpowX(int x, int n, std::stack<int> & s);
void printNdRemove(std::stack<int> & s);

int main(){
  /*a*/
  std::stack<int> s;
  ListpowX(10, 3, s);
  printNdRemove(s);
  return 0;
}

void printNdRemove(std::stack<int> & s){
  while (!(s.empty())) {
    std::cout << s.top() << std::endl;
    s.pop();
  }
}

void ListpowX(int x, int n, std::stack<int> & s) {
/*
 * Con está función se crea una stack con x elementos
 * consecutivos multiplos de n.
 */
  for(int i = x; i >= 0; --i){
    int a = pow(n,i);
    s.push(a);
  }
}
