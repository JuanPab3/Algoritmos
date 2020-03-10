#include <iostream>

using namespace std;

int C(int n,int k);

int main() {
    cout << C(100,10) << endl;
  return 0;
}

int C(int n,int k){
  if ((k == 0) || (n == k)){
    return 1;
  }
  else {
    return C(n-1,k-1) + C(n-1,k);
  }
}
