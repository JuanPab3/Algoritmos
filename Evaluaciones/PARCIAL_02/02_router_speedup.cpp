#include <iostream>
#include <utility>
#include <string>
#include <vector>
using namespace std;

void router_speedup (vector<string> &rooms, vector<int> &numcls, int range);

int main() {
    string a[] = {"Tesla", "Lovelace", "Hipatia", "Caldas", "Neumann", "Casur303", "Casur666"};
    int b[] = {3, 8, 6, 1, 1, 2, 12};


    vector<string> rooms(a, a + sizeof(a)/sizeof(string));
    vector<int> numcls(b, b + sizeof(b)/sizeof(int));

    router_speedup(rooms, numcls, 3);

    for(unsigned i = 0; i < rooms.size(); ++i)
        cout << rooms[i] << " ";
    cout << endl;

    for(unsigned i = 0; i < numcls.size(); ++i)
        cout << numcls[i] << " ";
    cout << endl;

    return 0;
}

void router_speedup (vector<string> &rooms, vector<int> &numcls, int range) {
    if (rooms.size() != numcls.size()) cerr << "/* Both vectors must have the same size */" << endl;

    int max;

    int zs = numcls.size()-1;
    for (int i = 0; i <= zs; i++) {
        max = i;
        if (numcls[i] >= range){
            for (int j = i; j <= zs; j++) {
                if (numcls[max] < numcls[j])
                max = j;
            }
            swap(numcls[i],numcls[max]);
            swap(rooms[i],rooms[max]);
        }
    }

}
