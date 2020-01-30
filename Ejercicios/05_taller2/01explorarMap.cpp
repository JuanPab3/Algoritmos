#include <iostream>
#include <string>
#include <map>

int main(){

  std::map<std::string,int> m;

  /*a*/
  std::string nombre1 = "Cali", nombre2 = "Juan", nombre3 = "Ana";
  int n_depresion1 = 100, n_depresion2 = 0, n_depresion3 = 25;
  m.insert(std::pair<std::string,int>(nombre1,n_depresion1));
  m.insert(std::pair<std::string,int>(nombre2,n_depresion2));
  m.insert(std::pair<std::string,int>(nombre3,n_depresion3));


  /*b*/
  m.erase("Cali");

  /*c*/
  std::cout << nombre2 << " esta " << m.at(nombre2) << "% deprimido." << std::endl;
  std::cout << nombre3 << " esta " << m[nombre3] << "% deprimida." << std::endl;

  /*d*/
  m[nombre1] = 75;
  std::cout << nombre1 << " esta " << m[nombre1] << "% deprimido." << std::endl;

  /*e*/
  std::cout << "Tienes " << m.size() << " elementos!" << std::endl;




  return 0;
}
