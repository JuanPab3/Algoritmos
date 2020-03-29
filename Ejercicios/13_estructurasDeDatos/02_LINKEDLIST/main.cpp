#include <iostream>
#include "linkedlist.hpp"

using namespace std;

int main() {
    LinkedList <char>lst;

    for (char ch = 'a'; ch <= 'z'; ch++) {
        lst.push_back(ch);
        cout << lst.back() << ",";
    }
    cin >> lst;
    cout << endl << lst << endl;

    return 0;
}
