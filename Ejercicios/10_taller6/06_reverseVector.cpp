#include <iostream>
#include <vector>

using namespace std;

void  reverse_vector(vector < int > & vec);

int main() {
    vector < int > vec;
    for (int i = 0; i <= 10; ++i)
        vec.push_back(i);

    cout << "Normal:" << endl << "{ ";
    for (int elem : vec)
        cout << elem << " ";
    cout << "}" << endl;

    reverse_vector(vec);

    cout << "Reverse:" << endl << "{ ";
    for (int elem : vec)
        cout << elem << " ";
    cout << "}" << endl;

  return 0;
}

void  reverse_vector(vector < int > & vec){
    if (vec.size() <= 1){
        vec = vec;
    } else {
        vector<int>::iterator it = vec.begin();
        int first = *it ,last = *(vec.end()-1);

        vec.erase(it);
        vec.pop_back();

        reverse_vector(vec);

        vec.insert(it,last);
        vec.push_back(first);

  }
}
