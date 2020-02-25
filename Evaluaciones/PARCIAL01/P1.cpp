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
