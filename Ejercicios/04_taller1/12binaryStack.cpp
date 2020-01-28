#include <iostream>
#include <stack>
#include <cmath>

void printNtoB(int n);

int main() {
  std::cout << "Enter a number: ";
  int num;
  std::cin >> num;
  std::cout << num << " in base 10 is ";
  printNtoB(num);
  std::cout << " in base 2." << std::endl;

  return 0;
}

void printNtoB(int n){
  std::stack<int> s;
  while (n != 0){
    s.push(n%2);
    n = floor(n/2);
  }
  while (!(s.empty())) {
    std::cout << s.top();
    s.pop();
  }
}
