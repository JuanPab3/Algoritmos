#include <iostream>
#include <stack>
using namespace std;

float median(stack<float>& S);

int main() {
  stack<float> s;
  for(int i = 4; i < 11; ++i)
    s.push(i);

//   cout << "{";
// while (!s.empty()){
//   cout << s.top()<< " ";
//   s.pop();
// }
//   cout << "}" << endl;


  cout << median(s) << endl;

  return 0;
}


float median(stack<float>& S) {
  int size = S.size();
  float total;
  if ( size%2 == 0){
    for (int i = 0; i <= ((size/2)-2); i++) S.pop();
    float a = S.top();
    S.pop();
    float b = S.top();
    total = (a+b)/2;
  } else {
    for (int i = 0; i < (size/2); i++) S.pop();
    total = S.top();
  }

  return total;
}
