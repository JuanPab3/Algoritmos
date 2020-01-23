#include<iostream>
#include<vector>
#include<cmath>

void printIntVect(const std::vector<int> v);


int main(){

  /*a*/
  std::vector<int> v;

  /*b*/
  for(int i = 0; i < 10; ++i){
    int newElem;
    newElem = pow(3,i);
    v.push_back(newElem);
  }
  printIntVect(v);


  std::cout << *v.begin() << std::endl;

  // /*c*/
  // int pos = 0;
  // while (true) {
  //   if (*v.begin()+pos >= 100){
  //     v.erase(v.begin()+pos, v.end());
  //     break;
  //   }else {
  //       ++pos;
  //   }
  //
  // }



  return 0;
}


/*----------------------------FUNCIONES----------------------------*/
void printIntVect(const std::vector<int> v){
  std::cout << "{";
  for (int elem : v) {
          std::cout << elem << " ";
      }
      std::cout << "}" <<std::endl;
}
