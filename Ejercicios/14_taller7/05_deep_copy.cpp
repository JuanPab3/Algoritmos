#include <iostream>

using namespace std;

char * deep_copy(char *ch);

int main() {
    cout << boolalpha;

    int sz = 10;
    char c = 'A';

    char *ch = new char[sz];

    for (int i = 0; i < sz; i++) {
        ch[i] = c;
    }

    char *newch = deep_copy(ch);
    newch[0] = 'z';

    for (int i = 0; i < sz; i++) {
        cout << ch[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < sz; i++) {
        cout << newch[i] << endl;
    }


    delete[] ch;
    return 0;
}

char * deep_copy(char *ch){
    bool brk = true;
    int i = 0;
    while (brk) {
        if (ch[i] == false) brk = false;
        ++i;
    }
    char *newch = new char[i];
    for (int k = 0; k < i; k++) {
        newch[k] = ch[k];
    }
    return newch;
}
