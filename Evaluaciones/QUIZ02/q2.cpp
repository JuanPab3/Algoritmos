
  #include <vector>
  #include <iostream>
  using namespace std;

  int pred(const vector<int> &ivec, int key) {
    int value;
    if (ivec[0] >= key) return -1;
    for (int elem : ivec){
      if (ivec[elem] < key) value = elem;
    }
    return value;
  }


  int main() {
      int key;
      vector<int> tst = {0, 2, 4, 6, 8};

      // test 1
      key = 5;
      cout << "key: " << key << " pred: " << pred(tst, key) << endl;

      // test 2
      key = 6;
      cout << "key: " << key << " pred: " << pred(tst, key) << endl;

      // test 3
      key = 0;
      cout << "key: " << key << " pred: " << pred(tst, key) << endl;

      // test 4
      key = 9;
      cout << "key: " << key << " pred: " << pred(tst, key) << endl;

      return 0;
  }
