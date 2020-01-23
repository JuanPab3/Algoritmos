#include <iostream>
#include <vector>
#include <string>

int findDistance(std::vector<char> &id, std::vector<int> &dis, char a);

int main() {
  std::vector<char> identificadore;
  std::vector<int> distancias;
  int num = 0;
  for (char ch = 'a'; ch <= 'z'; ++ch){
    identificadore.push_back(ch);
    ++num;
  }
  for (int i  = 0; i <= num; ++i)distancias.push_back(i);

  char ident = 'j';
  std::cout << "Distancia a \'" << ident << "\': " << findDistance(identificadore, distancias, ident) << std::endl;

  return 0;
}


int findDistance(std::vector<char> &id, std::vector<int> &dis, char a){
  int counter = 0;
  while (*(id.begin()+counter) != a)++counter;
  return dis[counter];
}
