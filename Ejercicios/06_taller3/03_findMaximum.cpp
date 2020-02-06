#include<iostream>
#include<vector>

using namespace std;

int findMaximum ( vector < int > & arr );

int main() {

  vector < int > s = {0,1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1,10};
  cout << "The highest value in the vector is " << findMaximum(s) << "."<< endl;
  return 0;
}

int findMaximum ( vector < int > & arr ) {
  vector<int>::iterator it0 = arr.begin(), it1 = arr.begin() + 1;
  int value ;
  while (it0 != arr.end()) {
    if ( *it0 > *it1){
      // cout << "¡ ¡ C O R R E C T ! !" << endl;
      value = *it0;
      break;
    }
    // cout << "it0: " << *it0 << endl;
    // cout << "it1: " << *it1 << endl;
    ++it0;
    ++it1;
  }
return value;
} //LINEAL
