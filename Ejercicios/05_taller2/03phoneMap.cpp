#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <map>

using std::cout;      using std::pair;
using std::map;       using std::endl;
using std::string;    using std::getline;
using std::ifstream;

int iniciales(map<string,int> & m,string w);
string extencion(map<string,int> & m,int n);

int main() {

  map<string,int> dir;
  ifstream text("03phoneMap.txt");
  string key = "";
  int value = 0;

  getline(text, key); // Trash line
  getline(text, key); // Trash line

  if(text.good()){
    while (!text.eof()) {
      text >> key;
      text >> value;
      dir.insert(pair<string,int>(key,value));
    }
  }

  cout << iniciales(dir,"JFPB") << endl;
  cout << extencion(dir,4013) << endl;


  return 0;
}

int iniciales(map<string,int> & m,string w){
  map<string,int>::iterator it = m.find(w);
  if(it == m.end()){
    return -1;
  }else{
    return m.at(w);
  }
}

string extencion(map<string,int> & m,int n){
  map<string,int>::iterator it = m.begin();
  while (it != m.end()) {
    if (it->second == n) {
      return it->first;
    } else {
      ++it;
    }
  }
  return "";
}
