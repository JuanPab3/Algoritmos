#include <iostream>
#include <string>
#include <map>

int main() {

  /*a*/
  std::map<std::string,std::string> m;
  m.insert(std::pair<std::string,std::string>("perro", "animal de cuatro patas."));
  m.insert(std::pair<std::string,std::string>("mango", "fruta color amarillo."));
  m.insert(std::pair<std::string,std::string>("celular", "tecnología comunicacional."));
  m.insert(std::pair<std::string,std::string>("empanada", "animal de cuatro patas."));

  /*e*/
  for (std::map<std::string,std::string>::iterator it = m.begin(); it != m.end(); ++it) std::cout << it->first << ": " << it->second << std::endl;

  std::cout << std::endl;

  std::map<std::string,std::string>::iterator it2 = m.begin();
  while (it2 != m.end()){
    std::cout << it2->first << ": " << it2->second << std::endl;
    ++it2;
  }


  return 0;
}
