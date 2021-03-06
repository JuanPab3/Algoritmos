#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

void doubleSelectionSort(vector < int > & v);
void printVec( vector < auto > & v);

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

  printVec(v);
  doubleSelectionSort(v);
  printVec(v);


    return 0;
}

void doubleSelectionSort(vector < int > & v){
    unsigned max = v.size();
    for(unsigned i = 0; i < (max-1); i++){
        unsigned jMin = i;
        for(unsigned j = i+1;j < max; j++){
            if(v[j] < v[jMin]) jMin = j;
        }
    if (jMin != i ) swap(v[i],v[jMin]);
    }
}

void printVec( vector < auto > & v){
  cout << "[";
  for (auto elem : v) cout << elem << " ";
  cout << "]" << endl;
}
