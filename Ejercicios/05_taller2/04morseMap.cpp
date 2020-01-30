#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <map>

using namespace std;

list<char> wordList(string & w);
bool isIn(list<char> & q, char c);

int main() {
  map<char,string> morse;
  list<string> morseL;
  list<char> charL,palabra;

  ifstream text("04morseMap.txt"),textB("04morseMapB.txt");
  char c,key;
  string value = "";

  getline(text,value);
  getline(text,value);

  if(text.good()){
    while (!text.eof()) {
      text >> key;
      text >> value;
      morse.insert(pair<char,string>(key,value));
    }
  }
  text.close();

  if(textB.good()){
    while (!textB.eof()) {
      textB >> c;
      charL.push_back(c);
    }
  }
  textB.close();



  string word = " ";

  cout << "Traductor de / a clave Morse" << endl;
  while (!word.empty()) {
    cout << "> "; getline(cin,word);
    palabra = wordList(word);
    if (isIn(charL,palabra.front())) {
      cout << "Palabra";
    } else if (palabra.front() == ("." || "-")) {
      cout << "morse";
    } else {
      cerr << "Palabra no valida";
    }
  }



  return 0;
}

list<char> wordList(string & w){
  list <char> c;
  for (char elem : w) c.push_back(elem);
  return c;
}

bool isIn(list<char> & q, char c){
  for (char elem : q){
    if (elem == c) return true;
  }
  return true;
}
