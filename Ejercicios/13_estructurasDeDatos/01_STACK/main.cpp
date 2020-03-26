
#include <vector>
#include <iostream>
#include "stack.hpp"
using namespace std;


int main() {
    cout << boolalpha;
    // creando stack de char's
    Stack<char> stk;

    for (char z = 'A'; z < 'Z'; z += 5) {
        stk.push(z);
        cout << z << " just pushed to stack\n";
    }
    cout << stk << endl;

    while (!stk.empty()) {
        cout << "Pop: " << stk.top() << endl;
        stk.pop();
    }
    cout << "# Stack size: " << stk.size() << endl;


    cout << "Add char: ";
    cin >> stk;

    while (!stk.empty()) {
        cout << "Pop: " << stk.top() << endl;
        stk.pop();
    }
    
    // creando un stack de bool's
    Stack<bool> bstk;

    bool var = false;
    bstk.push(var);

    var = true;
    bstk.push(var);

    cout << bstk.top() << endl;


    // crear un stack de vector's
    Stack<vector<int>> stk_vec;

    vector<int> v1(10, 0);
    vector<int> v2(1, -2);
    vector<int> v3(100, 2);

    stk_vec.push(v1);
    stk_vec.push(v2);
    stk_vec.push(v3);

    while (!stk_vec.empty()) {
        cout << "Vector --> size: " << stk_vec.top().size();
        cout << " - elem: " << stk_vec.top()[0] << endl;
        stk_vec.pop();
    }

    Stack<bool> bstk_copy(bstk);

    cout << "OG: "<< endl << bstk << endl;

    var = false;
    for (unsigned i = 0; i < 11; i++)
        bstk_copy.push(var);

    cout << "Copy: "<< endl << bstk_copy << endl;

    return 0;
}
