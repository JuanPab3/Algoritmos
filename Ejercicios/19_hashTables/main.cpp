#include <iostream>
#include "hash_set.hpp"
using namespace std;

template <>
unsigned hashcode(const int &item) {
    return static_cast<unsigned>(item);
}


int main() {
    hash_set<int> intset;

    for (int i = 0; i < 600; i++) {
        intset.insert(i);
    }

    cout << "Capacity: " << intset.capacity() << endl;
    cout << "Num elems: " << intset.size() << endl;

    for (int i = 0; i < 600; i++) {
        if (i%10 == 0) intset.erase(i);
    }

    return 0;
}
