#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void printIntVec(vector<int> & v);
int linealSearch(vector<int> & v);

int main() {
  int n = 30;
  vector<int> v;
  for (int i = 0; i < n; ++i)  v.push_back(i);
  vector<int>::iterator it = v.begin();
  printIntVec(v);
  int rand = floor((n/3)+n/7);
  it += rand;
  v.erase(it);
  printIntVec(v);

  cout << "El elemento faltante en el vector es: " << linealSearch(v) << endl;

  return 0;
}

void printIntVec(vector<int> & v){
  cout << "{";
  for(int elem : v) cout << elem << " ";
  cout << "}" << endl;
}

int linealSearch(vector<int> & v){
  int retroPuesta;
  vector<int>::iterator it1 = v.begin();
  vector<int>::iterator it2 = v.begin() + 1;
  while (it1 != v.end()) {
    if (*it2 == (*it1)+1){
      ++it1;  ++it2;
    } else {
      retroPuesta = *it2 - 1;
      break;
    }
  }
  return retroPuesta;
}
