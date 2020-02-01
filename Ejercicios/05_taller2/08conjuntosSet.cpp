#include <iostream>
#include <vector>
#include <set>

using namespace std;

set <int> aunion ( vector <int> & a , vector <int> & b ) ;
set <int> intsect ( vector <int> & a , vector <int> & b ) ;
set <int> difference ( vector <int> & a , vector <int> & b ) ;
void printIntSet( set <int> & s );
void printIntVector(vector<int> & l);

int main() {

  vector<int> sA;
  for (int i = -3; i <= 10; ++i) sA.push_back(i);
  vector<int> sB;
  for (int i = 3; i >= -10; --i) sB.push_back(i);

  cout << "Conjunto A = ";
  printIntVector(sA);
  cout << "Conjunto B = ";
  printIntVector(sB);

  set<int> sC;
  sC = aunion(sA,sB);
  cout << "AuB = ";
  printIntSet(sC);

  set<int> sD;
  sD = intsect(sA,sB);
  cout << "AnB = ";
  printIntSet(sD);

  set<int> sE;
  sE = difference(sA,sB);
  cout << "A-B = ";
  printIntSet(sE);

  set<int> sF;
  sF = difference(sB,sA);
  cout << "B-A = ";
  printIntSet(sF);

  return 0;

}

set <int> aunion ( vector <int> & a , vector <int> & b ){
  set <int> c;
  for (int em : a) c.insert(em);
  for (int el : b) c.insert(el);
  return c;
}

set <int> intsect ( vector <int> & a , vector <int> & b ){
  set <int> c;

  for (size_t i = 0; i <= a.size(); ++i){
    for (size_t j = 0; j <= b.size(); ++j){
      if(b[j] == a[i]){
        c.insert(a[i]);
        break;
      }
    }
  }
  return c;
}

set <int> difference ( vector <int> & a , vector <int> & b ){
  set <int> c;

  for (size_t i = 0; i <= a.size(); ++i){
    for (size_t j = 0; j <= b.size(); ++j){
      if(b[j] == a[i]){
        break;
      } else if (b[j] != a[i]) {
        if (j == b.size()){
          c.insert(a[i]);
          break;
        }
      }
    }
  }
  return c;
}

void printIntSet(set<int> & s){
  cout << "{";
  for (int elem : s) cout << elem << " ";
  cout << "}" << endl << endl;
}

void printIntVector(vector<int> & l){
  cout << "{";
  for (int elem : l) cout << elem << " ";
  cout << "}" << endl << endl;
}
