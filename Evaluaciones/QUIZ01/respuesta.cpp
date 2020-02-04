#include <list>
#include <iostream>
using namespace std;

howMany(list<int> & L, int k); 
printL(list<int> l);

int main() {
    int key;

    // TEST 1
    list<int> lst1;
    for (int i = 0; i < 10; i++)
        lst1.push_back(2 * i);

    printL(lst1);

    key = 3;
    cout << "Number of " << key << " in list: " << howMany(lst1, key) << endl;

    key = 4;
    cout << "Number of " << key << " in list: " << howMany(lst1, key) << endl;


    // TEST 2
    list<int> lst2(4, 8);
    printL(lst1);


    key = 0;
    cout << "Number of " << key << " in list: " << howMany(lst2, key) << endl;

    key = 8;
    cout << "Number of " << key << " in list: " << howMany(lst2, key) << endl;

    return 0;
}

void printL(list<int> l){
  for (int elem : l) cout << elem << " ";
  cout << endl;
}

int howMany(list<int> & L, int k) {
    int counter = 0;
    list<int>::iterator it = L.begin();
    while (it != L.end()) {
      if (k == *it) ++counter;
      ++it;
    }
    return counter;
}
