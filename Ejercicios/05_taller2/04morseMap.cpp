#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <map>

using namespace std;

bool isLet(list<char> & charL,string::iterator it); /*A string starts with a letter character*/
bool CisLet(char c,list<char> & charL);            /*A character is a letter character      */
bool stringM(list<string> & stringL, string s);   /*A string is a morse string             */
bool isMor(string::iterator it);                 /*A string starts with a morse character */
bool CisMor(char c);                            /*A character is a morse character.      */

int main() {

  /*Se crearon dos mapas, para poder hallar los simbolos morses anexos a una letra y biseversa*/
  map<char,string> morse;
  map<string,char> esrom;
  /*---------------------------------------------------------------*/

  list<char> charL;
  list<string> stringL;


  ifstream text("04morseMap.txt"),textB("04morseMapB.txt");
  char c,key;
  string value = "";

  /*Extrae las primeras dos lineas del archivo morse y las desecha.*/
  getline(text,value);
  getline(text,value);
  /*---------------------------------------------------------------*/

  /* Abrir el archivo morse y agrega a un mapa los caracteres y sus vaores respectivos.
   * Tambien crea un mapa inverso donde los que eran llaves ahora son valores.
   * Ademas, agrega los caracteres a una lista, al igual que los simbolos morse.
   */
  if(text.good()){
    while (!text.eof()) {
      text >> key;
      text >> value;
      morse.insert(pair<char,string>(key,value));
      esrom.insert(pair<string,char>(value,key));
      charL.push_back(key);
      stringL.push_back(value);
    }
  }
  text.close();
  /*---------------------------------------------------------------*/

  /*Abrir el archivo de caracteres agrega los elementos a una lista.
  if(textB.good()){
    while (!textB.eof()) {
      textB >> c;
      charL.push_back(c);
    }
  }
  textB.close();
  ---------------------------------------------------------------*/

  /*Verificar si el primer caractere de la palabra es morse o letra.*/
  string word = ".-- ..- --.-";
  string::iterator it = word.begin();
  bool isMorse,isLetter;
while (true) {
  isLetter = isLet(charL,it);
  if (isLetter == true)break;
  isMorse  = isMor(it);
  break;
}
  /*---------------------------------------------------------------*/

  /*Traducir cada palabra*/

  if (isLetter == true){
    for (char elem : word){
      if (CisLet(elem,charL)) cout << "  " << morse.at(elem);
    }
    cout << endl;
  } else if (isMorse == true) {
    string mString;
    while(!word.eof()){
      word >> mString;
      if (stringM(stringL, mString)) cout << esrom.at(mString);
    }
    cout << endl;
  }

  /*---------------------------------------------------------------*/



  return 0;
}


bool isLet(list<char> & charL,string::iterator it){
  bool iL;
  for (char elem : charL){
    if (elem == *it){
      iL = true;
      break;
    } else {
      iL = false;
    }
  }
  return iL;
}

bool CisLet(char c,list<char> & charL){
  bool iL;
  for (char elem : charL){
    if (c == elem){
      iL = true;
      break;
    } else {
      iL = false;
    }
  }
  return iL;
}

bool isMor(string::iterator it){
  bool iM;
  if( *it == '-' || *it == '.' ){
    iM = true;
  } else {
    iM = false;
  }
  return iM;
}

bool CisMor(char c){
  bool iM;
  if( c == '-' || c == '.' ){
    iM = true;
  } else {
    iM = false;
  }
  return iM;
}

bool stringM(list<string> & stringL, string s){
  bool iL;
  for (string elem : stringL){
    if (elem == s){
      iL = true;
      break;
    } else {
      iL = false;
    }
  }
  return iL;
}





/*
  TERMINAR ESTA MONDA
*/
