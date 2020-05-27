#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void invert(queue<int>& Q);

int main() {
  queue<int> q;
  for(int i = 0; i < 10; ++i){
    q.push(10*i);
    cout << q.back() << " ";
  }
  cout << endl;

  invert(q);

  for(int i = 0; i < 10; ++i){
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;

  return 0;
}

void invert(queue<int>& Q) {
  stack <int> S;
  while (!Q.empty()) {
    S.push(Q.front());
    Q.pop();
  }
  while (!S.empty()) {
    Q.push(S.top());
    S.pop();
  }
}
