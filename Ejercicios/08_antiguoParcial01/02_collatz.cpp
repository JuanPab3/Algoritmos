#include <iostream>
#include <map>

using namespace std;

map < int , int > collatz(int n);

int main() {

  map < int , int > m = collatz(6);
  map < int , int >::iterator it = m.begin();

  cout << "Keys:\t";
  while (it != m.end()) {
    cout << it->second << "\t";
    ++it;
  }
  cout << endl;
  cout << "Values:\t";
  it = m.begin();
  while (it != m.end()) {
    cout << it->first << "\t";
    ++it;
  }
  cout << endl;

  return 0;
}


map < int , int > collatz(int n){
  int value=n,count=1;
  map < int , int > cz;
  cz.insert(pair< int , int >(count,value));
  while (value != 1){
    if (value%2 == 0){
      value /= 2;
    } else {
      value *= 3;
      ++value;
    }
    ++count;
    cz.insert(pair< int , int >(count,value));
  }
  return cz;
}
