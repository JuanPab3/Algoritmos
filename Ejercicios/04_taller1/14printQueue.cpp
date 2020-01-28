#include<iostream>
#include<queue>
#include<cmath>

void ListpowX(int x, int n, std::queue<int> & q);
void printNdRemove(std::queue<int> & q);

int main(){
  /*a*/
  std::queue<int> q;
  ListpowX(10, 3, q);
  printNdRemove(q);
  return 0;
}

void printNdRemove(std::queue<int> & q){
  std::cout << "{";
  while (!(q.empty())) {
    std::cout << q.front() << " " ;
    q.pop();
  }
  std::cout << "}" << std::endl;
}

void ListpowX(int x, int n, std::queue<int> & q) {
/*
 * Con está función se crea una queue con x elementos
 * consecutivos multiplos de n.
 */
  for(int i = x; i >= 0; --i){
    int a = pow(n,i);
    q.push(a);
  }
}
