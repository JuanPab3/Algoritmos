
#include <vector>
#include <iostream>
#include "lstack.hpp"
using namespace std;


int main() {
    cout << boolalpha;
    // creando stack de char's
    LinkedStack<char> stk;

    for (char z = 'A'; z < 'Z'; z += 5) {
        stk.push(z);
        cout << z << " just pushed to stack\n";
    }
    cout << stk << endl;

    LinkedStack<char> stk_copy(stk);
    // stk_copy = stk;
    // cout<<"MAIN IS WORKING\n";
    stk_copy.reverse();

    cout << stk_copy << endl;

    while (!stk.empty()) {
        cout << "Pop: " << stk.pop() << endl;
    }
    cout << "# LinkedStack size: " << stk.size() << endl;


    cout << "Add char: ";
    cin >> stk;

    while (!stk.empty()) {
        cout << "Pop: " << stk.pop() << endl;
    }

    // creando un stack de bool's
    LinkedStack<bool> bstk;

    bool var = false;
    bstk.push(var);

    var = true;
    bstk.push(var);

    cout << bstk.peek() << endl;


    // crear un stack de vector's
    // LinkedStack<vector<int>> stk_vec;
    //
    // vector<int> v1(10, 0);
    // vector<int> v2(1, -2);
    // vector<int> v3(100, 2);
    //
    // stk_vec.push(v1);
    // stk_vec.push(v2);
    // stk_vec.push(v3);
    //
    // while (!stk_vec.empty()) {
    //     cout << "Vector --> size: " << stk_vec.peek().size();
    //     cout << " - elem: " << stk_vec.peek()[0] << endl;
    //     stk_vec.pop();
    // }

    LinkedStack<bool> bstk_copy;

    cout << "OG " << bstk << endl;

    bstk_copy = bstk;

    cout << "Copy " << bstk_copy << endl;

    return 0;
}
