#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
void printVec( vector < auto > & v);
void bubbleSortI (vector < int > & vI);
void bubbleSortS (vector < string > & vS);

int main() {

  vector < int > vI;
  ifstream textA("01_bubbleSortInt.txt"),textB("01_bubbleSortStr.txt");
  int value;
  string word;

  if (textA.good()) {
    while (true) {
      textA >> value;
      vI.push_back(value);
      if (textA.eof()) break;
    }
  } else {
    cerr << "/* error with file */" << endl;
  }
  textA.close();

  vI.pop_back();
  // bubbleSortI (vI);

  vector < string > vS;

  if (textB.good()) {
    while (true) {
      textB >> word;
      vS.push_back(word);
      if (textB.eof()) break;
    }
  } else {
    cerr << "/* error with file */" << endl;
  }
  textB.close();

  vS.pop_back();
  bubbleSortS (vS);

  return 0;
}

void printVec( vector < auto > & v){
  cout << "[";
  for (auto elem : v) cout << elem << " ";
  cout << "]" << endl;
}

void bubbleSortI (vector < int > & vI){
  bool swapped = true;
  int start = 0, end = vI.size() - 1;

  while (swapped) {

    swapped = false;

    for (int i = start; i < end; ++i) {
      if (vI[i] > vI[i + 1]) {
        swap(vI[i], vI[i + 1]);
        swapped = true;
        printVec(vI);
      }
    }

    if (!swapped) break;

    swapped = false;

    --end;

    for (int i = end - 1; i >= start; --i) {
        if (vI[i] > vI[i + 1]) {
            swap(vI[i], vI[i + 1]);
            swapped = true;
            printVec(vI);
        }
    }
    ++start;
  }
}

void bubbleSortS (vector < string > & vI){
  bool swapped = true;
  int start = 0, end = vI.size() - 1;

  while (swapped) {
    // reset the swapped flag on entering
    // the loop, because it might be true from
    // a previous iteration.
    swapped = false;
    // loop from left to right same as
    // the bubble sort
    for (int i = start; i < end; ++i) {
      if (vI[i] > vI[i + 1]) {
        swap(vI[i], vI[i + 1]);
        swapped = true;
        printVec(vI);
      }
    }
    // if nothing moved, then array is sorted.
    if (!swapped) break;
    // otherwise, reset the swapped flag so that it
    // can be used in the next stage
    swapped = false;
    // move the end point back by one, because
    // item at the end is in its rightful spot
    --end;
    // from right to left, doing the
    // same comparison as in the previous stage
    for (int i = end - 1; i >= start; --i) {
        if (vI[i] > vI[i + 1]) {
            swap(vI[i], vI[i + 1]);
            swapped = true;
            printVec(vI);

        }
    }

    // increase the starting point, because
    // the last stage would have moved the next
    // smallest number to its rightful spot.
    ++start;
  }
}
