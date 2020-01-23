#include <iostream>
#include <vector>
#include <string>

void printVectString(std::vector<std::string> &v);
void printVecF(std::vector<char> & v);
void printVecB(std::vector<char> & v);

int main(){

  /*a*/
  std::vector<char> cV;
  for (char ch = 'A'; ch <= 'Z'; ch++) cV.push_back(ch);
  printVecF(cV);
  printVecB(cV);

  /*b*/
  std::vector<std::string> sV;
  std::cout << "Add fruits to the list, when you want to stop enter nothing." << std::endl;
  while (true) {
    std::cout << "-> ";
    std::string newElem;
    getline(std::cin,newElem) ;
    if (newElem.empty()) break;
    sV.push_back(newElem);
  }
  printVectString(sV);


  return 0;
}
/*----------------------------------FUNCIONES----------------------------------*/

void printVecF(std::vector<char> & v){
  std::cout << "{";
  for (char elem : v) {
          std::cout << elem << " ";
      }
      std::cout << "}" <<std::endl;
}

void printVecB(std::vector<char> & v){
  std::cout << "{";
  for (int i = (v.size()-1); i >= 0; --i) {
          std::cout << v[i] << " ";
      }
      std::cout << "}" <<std::endl;
}



void printVectString(std::vector<std::string> &v){
  std::cout << "{";
  for (std::string elem : v) {
          std::cout << elem << " ";
      }
      std::cout << "}" <<std::endl;
}
