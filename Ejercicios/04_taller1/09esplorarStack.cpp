#include <iostream>
#include <stack>
#include <string>

void isEmpty(std::stack<int> & s);

void topAndRemove(std::stack<int> & s);

int main() {

  std::stack<int> s ({0,1,2,3});

  /*a*/
  std::cout << "The stack have " << s.size() << " elements." << std::endl;

  /*b*/
  isEmpty(s);

  /*c*/  /*d*/
  topAndRemove(s);
  topAndRemove(s);
  topAndRemove(s);
  topAndRemove(s);
  topAndRemove(s);

  /*e*/
  for (int i = 0; i <= 10; ++i) s.push(i);
  isEmpty(s);



  return 0;
}


void isEmpty(std::stack<int> & s){
  std::string w;
  if(s.empty()){
    w = "empty.";
  } else if(!(s.empty())){
    w = "not empty.";
  }
  std::cout << "The stack is " << w << std::endl;
}

void topAndRemove(std::stack<int> & s){
  if (s.empty()){
    isEmpty(s);
  } else {
    std::cout << "The element on the top is " << s.top() << std::endl;
    s.pop();
    std::cout << "Not anymore!" << std::endl;
  }
}
