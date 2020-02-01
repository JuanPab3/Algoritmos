#include <iostream>
#include <set>

using namespace std;

bool subset(set<int> & a,set<int> & b);

int main() {

  set<int> sA;
  for (int i = 0; i <= 100; ++i) sA.insert(i);
  set<int> sB;
  for (int i = 0; i >= -100; --i) sB.insert(i);

  if(subset(sA,sB)){
    cout << "The second set is a subset of the first one." << endl;
  } else {
    cout << "The second set is not a subset of the first one." << endl;
  }

  return 0;
}

bool subset(set<int> & a,set<int> & b){
  set<int> c = a;
  for (int elem : b) c.insert(elem);
  if (c == a) return true;
  return false;
}
