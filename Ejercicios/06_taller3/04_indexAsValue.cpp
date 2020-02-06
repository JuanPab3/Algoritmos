#include<iostream>
#include<vector>

using namespace std;

int indexAsValue ( vector < int > & arr );

int main() {

  vector < int > s = {-1,0,1,2,3,4,5,6,7,9};
  cout << indexAsValue(s) << endl;
  return 0;
}

int indexAsValue ( vector < int > & arr ) {
  int value = -1, j=arr.size();
  for (int i = 0; i < j; ++i){
    if (arr[i] == i) value = i;
  }
return value;
}
