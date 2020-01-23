#include<iostream>
#include<vector>
#include<cmath>

void printVect(std::vector<int> &v);

int main(){

  /*a*/
  std::vector<int> v;

  /*b*/
  for(int i = 0; i < 10; ++i){
    int newElem;
    newElem = pow(3,i);
    v.push_back(newElem);
  }
  printVect(v);

  /*c*/
  /*Disorganised*/
  // int pos = 0;
  // while (true) {
  //   if (*(v.begin()+pos) >= 100){
  //     v.erase(v.begin()+pos);
  //   }else {
  //       ++pos;
  //   }
  // }

  /*Organised*/
  int pos = 0;
  while (true) {
    if (*(v.begin()+pos) >= 100){
      v.erase(v.begin()+pos, v.end());
      break;
    }else {
        ++pos;
    }
  }

  printVect(v);

  return 0;
}

/*----------------------------FUNCIONES----------------------------*/
void printVect(std::vector<int> &v){
  std::cout << "{";
  for (int elem : v) {
          std::cout << elem << " ";
      }
      std::cout << "}" <<std::endl;
}
