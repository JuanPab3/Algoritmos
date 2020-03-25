#include <iostream>
#include "char_stack.hpp"
using namespace std;

int main() {
    CharStack stk;

    for (char z = 'A'; z < 'Z'; z += 5) {
        stk.push(z);
        cout << z << " just pushed to stack\n";
    }
    cout << "Top element: " << stk.top() << endl;
    cout << "* Stack size: " << stk.size() << endl;

    while (!stk.empty()) {
        cout << "Pop: " << stk.top() << endl;
        stk.pop();
    }
    cout << "# Stack size: " << stk.size() << endl;

    return 0;
}
