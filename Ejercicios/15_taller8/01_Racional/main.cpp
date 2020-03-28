#include <iostream>
#include "racional.hpp"

using namespace std;

int main() {
    cout << boolalpha;

    Racional ra1(1,74,15),ra2 = ra1;
    -ra1;
    ra2 += (ra1);
    Racional ra3 = (ra1-ra2);

    bool rab = ra1 <= ra2;


    cout << "Num: " << ra1.get_num() << endl;
    cout << "Den: " << ra1.get_den() << endl;
    cout << ra1 << " = " << ra2 << " is " << rab << endl;

    cout << ra1 << " - " << ra2 << " = " << ra3 << endl;

    Racional q;

    cin >> q;

    cout << q << endl;

    return 0;
}
