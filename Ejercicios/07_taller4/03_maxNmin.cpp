#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

void printVec( vector < auto > & v);
void findMin(vector < int > & v);
void findMax(vector < int > & v);

int main() {

    vector < int > v;
    ifstream text("01_bubbleSortInt.txt");

    if (text.good()){
        int value;
        while (!text.eof()) {
            text >> value;
            v.push_back(value);
        }
    } else {
      cerr << "/* error with file */" << endl;
  }
  text.close();

  v.pop_back();

  findMin(v);
  findMax(v);

    return 0;
}

void findMin(vector < int > & v) {
    int max = v.size();
    int minIndx = 0;
    for (int i = 1; i < (max);i++){
        if (v[minIndx]>v[i]) minIndx = i;
    }
    cout << "The min value is: " << v[minIndx] << endl;
}

void findMax(vector < int > & v) {
    int max = v.size();
    int maxIndx = 0;
    for (int i = 1; i < (max);i++){
        if (v[maxIndx]<v[i]) maxIndx = i;
    }
    cout << "The max value is: " << v[maxIndx] << endl;
}

void printVec( vector < auto > & v){
  cout << "[";
  for (auto elem : v) cout << elem << " ";
  cout << "]" << endl;
}
