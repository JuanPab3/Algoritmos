#include <iostream>

int main() {
  int start, end, total = 0;
  std::cout << "Start of the sequence: ";
  std::cin >> start;
  std::cout << "End of the sequence: ";
  std::cin >> end;

  for(int i = start; i <= end;++i){
    total += i;
  }
  std::cout << "Total: " << total << std::endl;
  return 0;
}
