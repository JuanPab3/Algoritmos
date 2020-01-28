#include<iostream>
#include<queue>
#include <cmath>

void printQueue(std::queue<double> q);

int main(){

  std::queue<double> q,b;

  for (double i = 0.1; i <= 0.5; i += 0.1) q.push(i);
  printQueue(q);


  int half = floor(q.size()/2);
  for (int a = 0; a < half; ++a){
    b.push(q.front());
    q.pop();
  }
  q.pop();

  for (size_t j = 0; j <= q.size(); ++j ){
    b.push(q.front());
    q.pop();
  }
  printQueue(b);




  return 0;
}


void printQueue(std::queue<double>  q){

  std::cout << "{";
  while (!(q.empty())){
    std::cout << q.front() << " ";
    q.pop();
  }

  std::cout << "}" << std::endl;
}
