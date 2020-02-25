int lin_suc(vector<int> &ivec, int key) {
  int value = -1, pos = ivec.size()-1;
  if (ivec[pos]<= key) return value;
  while (pos >= 0) {
    if (ivec[pos] > key) value = pos;
    pos--;
  }
  return value;
}
