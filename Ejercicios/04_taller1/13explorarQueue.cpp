#include <iostream>
#include <queue>
#include <string>

void isEmpty(std::queue<int> & s);

int main(){

  std::queue<int> q ({1,2,3,4,5});

  /*a*/
  std::cout << "The Queue is " << q.size() << " elements long." << std::endl;

  /*b*/
  isEmpty(q);

  /*c*/ /*d*/
  std::cout << "The first item of the queue is " << q.front() << "." << std::endl;
  q.pop();
  std::cout << "The first item of the queue is " << q.front() << "." << std::endl;
  q.pop();
  std::cout << "The first item of the queue is " << q.front() << "." << std::endl;
  q.pop();
  std::cout << "The first item of the queue is " << q.front() << "." << std::endl;
  q.pop();
  std::cout << "The first item of the queue is " << q.front() << "." << std::endl;
  q.pop();
  isEmpty(q);

  /*e*/
  for (int i = 5; i >= 0; --i) q.push(i);

  return 0;
}

void isEmpty(std::queue<int> & s){
  std::string w;
  if(s.empty()){
    w = "empty.";
  } else if(!(s.empty())){
    w = "not empty.";
  }
  std::cout << "The queue is " << w << std::endl;
}
