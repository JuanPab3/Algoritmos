#include <iostream>
#include <string>
#include <set>

using namespace std;

void printStringSet(set<string> & s);

int main() {

  /*a*/
  set<string> s;
  set<string>::iterator it;
  /*b*/
  s.insert("Nataly");
  s.insert("Luis");
  s.insert("Juana");
  s.insert("Carlos");
  s.insert("Juan");
  printStringSet(s);

  /*c*/
  s.erase("Juan");
  printStringSet(s);

  /*d*//*e*/
  cout << "Está -> "<< *s.find("Carlos") << endl;
  /*cout << "No esta->"<< *s.find("Juan") << endl; Segmentation fault (core dumped)*/

  /*f*/
  cout << "Num. Elemntos: "<< s.size() << endl;

  /*g*/
  it = s.begin();
  cout << "First -> " << *it << endl;
  it = s.end();
  cout << "Last -> " << *(--it) << endl;



  return 0;

}


void printStringSet(set<string> & s){
  cout << "{";
  for (string elem : s) cout << elem << " ";
  cout << "}" << endl;
}
