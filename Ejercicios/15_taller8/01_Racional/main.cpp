#include "racional.hpp"
#include <iostream>
#include <vector>

using namespace std;

Racional r_pow(Racional &r,const int &k);

int main() {
    cout << boolalpha;

    int n = 16, a = 1;
    Racional r(1,2),total, *pr = new Racional[n];

    for (int k = 0; k < n; k++) {
        Racional temp = r_pow(r,k);
        long double divi;
        temp *= a;
        total += temp;
        divi = total.flot();
        cout << temp << '\t' << total << '\t' << divi << endl;
        pr[n] = temp;
    }
    delete[] pr;

    return 0;
}

Racional r_pow(Racional &r,const int &k){
    Racional temp = r;
    if (k == 0) {
        temp.set_rac(1,1);
    } else if (k > 1){
        // cout << temp << endl;
        for (int i = 1; i < k; i++) {
            temp *= r;
        }
    }
    return temp;
