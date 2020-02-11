#include<iostream>
#include<fstream>
#include<vector>
#include<cmath>

using namespace std;

void printVec( vector < auto > & v);
double mean(vector<int> & v);
void median(vector<int> & v);

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

    cout << "La mediana del vector es: " << mean(v) << endl;
    median(v);

    return 0;
}

double mean(vector<int> & v) {
    int max = v.size()-1;
    double total = 0;
    for (int i = 0; i < max; i++) {
        total += v[i];
    }
    total = total/max;
    return total;
}

void median(vector<int> & v){
    int half = ceil((v.size())/2);
    if ((v.size()%2)==0) {
        int median1, median2;
        median1 = v[half];
        median2 = v[half+1];
        cout << "Tus medias son: " << median1 << " y " << median2 << endl;

    } else if ((v.size()%2)==1) {
        int median;
        median = v[half];
        cout << "Tu media es: " << median << endl;
    }
}

void printVec( vector < auto > & v){
  cout << "[";
  for (auto elem : v) cout << elem << " ";
  cout << "]" << endl;
}
