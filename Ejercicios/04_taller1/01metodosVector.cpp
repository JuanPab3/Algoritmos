#include <iostream>
#include <vector>
#include <string>

void printIntVect(const std::vector<int> v);

int main(){
  std::vector<int> v10;
  v10.push_back(9);
  v10.push_back(8);
  v10.push_back(7);
  v10.push_back(6);
  v10.push_back(5);
  v10.push_back(4);
  v10.push_back(3);
  v10.push_back(2);
  v10.push_back(1);
  v10.push_back(0);
  printIntVect(v10);

  /*a*/
  std::cout << "Vector size: " << v10.size() << std::endl;

  /*b*/
  std::string bul;
  if (v10.empty()){
    bul = "True";
  } else {
    bul = "False";
  }
  std::cout << "Is empty: " << bul << std::endl;

  /*c*/
  int i;
  while(true){
    std::cout << "Enter a nuber between 0 and " << v10.size()-1 << ": ";
    std::cin >> i;
    if((i >= 0 ) && (i<=v10.size()-1)){
      break;
    }
    std::cerr << "Invalid Value. Try Again." << std::endl;
  }
  std::cout << "The element in the " << i << " position is: " << v10[i] << std::endl;

  /*d*/
  std::cout << "First element: " << v10.front() << std::endl
            << "Last element: " << v10.back() << std::endl;

  /*e*/
  while(true){
    std::cout << "Enter a nuber between 0 and " << v10.size()-1 << ": ";
    std::cin >> i;
    if((i >= 0 ) && (i<=v10.size()-1)){
      break;
    }
    std::cerr << "Invalid Value. Try Again." << std::endl;
  }

  return 0;
}

void printIntVect(const std::vector<int> v){
  for (int elem : v) {
          std::cout << elem << " ";
      }
      std::cout << std::endl;
}
