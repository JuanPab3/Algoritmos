#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int anti_peak(const vector < int > & vec);

int main() {
  vector < int > v;
  ifstream text("03_antiPeak.txt");

  if (text.good()) {
    int val;
    while (!text.eof()) {
      text >> val;
      v.push_back(val);
    }
  } else {
    cerr << "/*The File Isn't Working*/" << endl;
  } text.close();

  v.pop_back();

  cout << "El minimo es: " << v[anti_peak(v)] << endl;

  return 0;
}

int anti_peak(const vector < int > & vec){
  int min = -1, sz = vec.size();
  if (sz < 3) min = -1;
  for (int i = 1; i <= (sz-2);++i){
    if (vec[i-1] >= vec[i] && vec[i] <= vec[i+1]) min = i;
  }
  return min;
}
