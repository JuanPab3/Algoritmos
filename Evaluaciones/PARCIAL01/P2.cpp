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
