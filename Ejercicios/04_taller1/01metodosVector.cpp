#include <iostream>
#include <vector>
#include <string>

void printIntVect(const std::vector<int> v);

int main(){
  std::vector<int> v10 = {9,8,7,6,5,4,3,2,1,0};

  printIntVect(v10);
  int last = v10.size()-1;

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
    if((i >= 0 ) && (i <= last)){
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
    std::cout << "Enter a number between 0 and " << v10.size()-1 << ": ";
    int b;
    std::cin >> b;
    if((b >= 0 ) && (b <= last)){
      break;
    }
    std::cerr << "Invalid Value. Try Again." << std::endl;
  }
  printIntVect(v10);
  v10.erase(v10.begin()+(i));
  printIntVect(v10);

  /*f*/
  int newItem;
  std::cout << "Enter a new int to insert to the vector: ";
  std::cin >> newItem;
  std::cout << "To deside the position to be inserted," << std::endl;
  while(true){
    std::cout << "Enter a nuber between 0 and " << v10.size()-1 << ": ";
    std::cin >> i;
    if((i >= 0 ) && (i<=last)){
      break;
    }
    std::cerr << "Invalid Value. Try Again." << std::endl;
  }
  std::cout << "Without insert item: ";
  printIntVect(v10);
  v10.insert(v10.begin()+(i+1), newItem);
  std::cout << "With insert item: ";
  printIntVect(v10);

  /*g*/
  int newNum;
  std::cout << "New number to add: ";
  std::cin >> newNum;
  v10.push_back(newNum);
  std::cout << "New vector: " ;
  printIntVect(v10);
  v10.pop_back();
  std::cout << "Old vector: ";
  printIntVect(v10);

  /*h*/
  std::cout << "Looking for an item?";
  int h;
  while(true){
    std::cout << "Enter a nuber between 0 and " << v10.size()-1 << ": ";
    std::cin >> h;
    if((h >= 0 ) && (h<=last)){
      break;
    }
    std::cerr << "Invalid Value. Try Again." << std::endl;
  }
  std::cout << "The item in the position " << h << " is " << v10[h] << std::endl;


  return 0;
}

void printIntVect(const std::vector<int> v){
  for (int elem : v) {
          std::cout << elem << " ";
      }
      std::cout << std::endl;
}
