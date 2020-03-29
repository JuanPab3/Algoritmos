#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string> permutaciones(string & s);
set<string> char_changer(set<string> & s, char c);

int main() {

    string word;
    cout << "Word 4 permutations; ";
    cin >> word;

    set<string> perm = permutaciones(word);

    for (set<string>::iterator it = perm.begin(); it != perm.end(); ++it)
        cout << *it << endl;


    return 0;
}

set<string> permutaciones(string & s){
    set<string> perm;
    if (s.size() <= 1) {
        perm.insert(s);
    } else {
        char first = s.at(0);
        string tmp = s.substr(1,s.size()-1);
        set<string> set_s = permutaciones(tmp);
        perm = char_changer(set_s,first);
    }
    return perm;
}

set<string> char_changer(set<string> & s, char c){
    set<string> out;
    string str, temp, ch(1,c);
    for (set<string>::iterator it = s.begin(); it != s.end(); ++it)  {
        str = *it;
        for (size_t i = 0; i <= str.size(); ++i) {
            temp = str;
            temp.insert(i,ch);
            out.insert(temp);
        }
    }
    return out;
}
