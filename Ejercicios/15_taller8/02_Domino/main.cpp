#include "domino.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

    Domino *juego = new Domino[28];

    int a = 0;
    for (int i = 0; i <= 6; i++){
        for (int j = i; j <= (6); j++){
            juego[a] = Domino(i,j);
            // cout << juego[a].to_str() << endl;
            a++;
        }
    }
    a = 0;
    for (int i = 0; i <= 6; i++){
        for (int j = i; j <= (6); j++){
            cout << juego[a] << "\t";
            a++;
        }
        cout << endl;
    }


    delete[] juego;
    return 0;
}
