#include <vector>
#include <iostream>
using namespace std;

int lin_suc(vector<int> &ivec, int key);

int main() {
    int key;
    vector<int> tst = {0, 2, 4, 6, 8};

    // test 1
    key = 5;
    cout << "key: " << key << " lin_suc: " << lin_suc(tst, key) << endl;

    // test 2
    key = 4;
    cout << "key: " << key << " lin_suc: " << lin_suc(tst, key) << endl;

    // test 3
    key = 0;
    cout << "key: " << key << " lin_suc: " << lin_suc(tst, key) << endl;

    // test 4
    key = 9;
    cout << "key: " << key << " lin_suc: " << lin_suc(tst, key) << endl;

    return 0;
}

int lin_suc(vector<int> &ivec, int key) {
  int value = -1, pos = ivec.size()-1;
  if (ivec[pos]<= key) return value;
  while (pos >= 0) {
    if (ivec[pos] > key) value = pos;
    pos--;
  }
  return value;
}
