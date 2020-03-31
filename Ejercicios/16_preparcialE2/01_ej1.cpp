#include <cmath>
#include <iostream>
using namespace std;

float alt_har_num(int n);

int main() {
    for (int i = 1; i < 10001; i += 100) {
        float hn = alt_har_num(i);
        float error = abs(hn - log(2));
        cout << "H(" << i << ") = " << hn << " --> Err = " << error << endl;
    }

    return 0;
}

float alt_har_num(int n) {
    if (n == 1){
        return 1;
    } else {
        double num = pow(-1,n+1);
        return (num/n) + alt_har_num(n-1);
    }
}
