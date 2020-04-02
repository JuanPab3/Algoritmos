#include <iostream>
using namespace std;

void collatz(int n);

int main() {
    collatz(6);
    cout << endl;

    return 0;
}


void collatz(int n) {

    if (n <= 0){
        cerr << "/* Valor menor a 1 no permitido */" << endl;
    }else if (n == 1){
        cout << " 1" << endl;
    } else {
        cout << " " << n;
        if (n%2 == 0){
            collatz(n/2);
        } else {
            collatz((3*n)+1);
        }
    }
}
