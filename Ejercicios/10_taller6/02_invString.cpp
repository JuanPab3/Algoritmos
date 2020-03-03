#include <iostream>
#include <string>

using namespace std;

string invString(string str, int first, int last);

int main() {
  string a = "123456789",b;
  cout << "Normal:  " << a << endl;
  int size = a.size()-1;
  b = invString(a,0,size);
  cout << "Inverse: " << b << endl;

  return 0;
}


string invString(string str, int first, int last){
  if (last < first){
    return str;
  } else {
    swap(str[first],str[last]);
    first++;
    last--;
    return invString(str, first, last);
  }
}
