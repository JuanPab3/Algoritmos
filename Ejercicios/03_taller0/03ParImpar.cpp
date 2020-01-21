#include <iostream>

int main() {
  int num;
  std::cout << "Enter an intager: ";
  std::cin >> num;

  if (num%2 == 0) {
    std::cout << "Your intager is even" << std::endl;
  }else if((num%2)-1 == 0){
    std::cout << "Your intager is odd" << std::endl;
  }

  return 0;
}
