#include <iostream>

using namespace std;

int kPotencia(int n, int k);

int main() {
  int n,k;
  cout << "Numero base: ";
  cin >> n;
  cout << "Numero de potencias: ";
  cin >> k;

  cout << kPotencia(n,k) << endl;

  return 0;
}

int kPotencia(int n, int k){
  if (k == 0)return 1;
  return n * kPotencia(n,k-1);
}
