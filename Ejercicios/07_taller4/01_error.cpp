#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
void printVec( vector < auto > & v);
void bubbleSortI (vector < int > & vI);

// void bubbleSortS (vector < string > & vS);

int main() {

  vector < int > vI;
  ifstream text("01_bubbleSort.txt");
  int value  = -1;

  if (text.good()) {
    while (true) {
      text >> value;
      vI.push_back(value);
      if (text.eof()) break;
    }
  } else {
    std::cerr << "/* error with file */" << endl;
  }
  text.close();
  vI.pop_back();
  bubbleSortI (vI);



  // vector < string > vS;

  return 0;
}

void printVec( vector < auto > & v){
  cout << "[";
  for (auto elem : v) cout << elem << " ";
  cout << "]" << endl;
}

void bubbleSortI (vector < int > & vI){
  for (unsigned i = 0; i <= (vI.size()-1);i++) {
    cout << "i = " << i << endl;
    for (unsigned j = vI.size(); j <= i+1; j--) {
      cout << "j = " << j << endl;
      if  (vI[j] < vI[j - 1]) swap(vI[j],vI[j - 1]);
      printVec(vI);
    }
  }
}










































/**/
