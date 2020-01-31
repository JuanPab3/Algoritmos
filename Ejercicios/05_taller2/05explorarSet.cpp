#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
  set<int> s;

  /*a*//*b*/
  for (int i = 0; i <= 10; ++i) s.insert(i);
  for (int i = 0; i >= -10; --i) s.insert(i);
  // for (int i = -10; i <= 10; ++++i) s.erase(i);
  cout << "{";
  for (int elem : s) cout << elem << " ";
  cout << "}" << endl;

  // for (int i = -9; i <= 9; ++++i) s.erase(i);
  // for (int elem : s) cout << elem << endl;

  /*c*/
  string w;
  if (s.empty()){
    w = "is empty.";
  }else{
    w = "is not empty.";
  }
  cout << "The set " << w << endl;

  /*d*/
  int from  = -5,
      to    = 6;
  cout << "{";
  for (set<int>::iterator it = s.find(from); it != s.find(to); ++it)cout << *it << " ";
  cout << "}" << endl;

  return 0;
}
