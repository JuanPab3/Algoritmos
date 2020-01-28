#include<iostream>
#include <string>
#include<list>


void printEmpty(std::list<int> &l);

int main() {

  /*a*/
  std::cout << "¿De cuantos elementos quieres crear to lista?" << std::endl << "-> ";
  int elements;
  std::cin >> elements;
  std::list<int> l (elements);
  std::list<int>::iterator i = l.begin();
  // std::list<int> * j;


  std::cout << "Tu lista tiene " << l.size() << " elementos!" << std::endl;

  /*b*/
  printEmpty(l);
  l.clear();
  printEmpty(l);

  /*e*/
  l.push_front(1);
  std::cout << "Tu lista tiene " << l.size() << " elementos!" << std::endl;
  l.push_back(2);
  std::cout << "Tu lista tiene " << l.size() << " elementos!" << std::endl;
  l.push_back(3);
  std::cout << "Tu lista tiene " << l.size() << " elementos!" << std::endl;

  /*c*/
  std::cout << "Tu primer elemento es el " << l.front() << "." << std::endl;
  std::cout << "Tu ultimo elemento es el " << l.back() << "." << std::endl;

  /*d*/
  l.pop_front();
  std::cout << "Tu primer elemento es el " << l.front() << "." << std::endl;
  l.pop_back();
  std::cout << "Tu ultimo elemento es el " << l.back() << "." << std::endl;



  return 0;
}

void printEmpty(std::list<int> &l){
  std::string word;
  if (l.empty()) {
    word = "está vacia.";
  } else {
    word = "no está vacia.";
  }
  std::cout << "Tu lista " << word << std::endl;
}
