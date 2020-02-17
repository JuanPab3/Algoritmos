#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

void printVec ( vector < auto > v);
float disponible (vector < float > & consumo, float cupo_tot);
int transcc ( vector < float> & consumo, float cupo_tot);

int main() {

  ifstream values("01_transacciones.txt");
  string trashString;
  float cupo_tot,transaccion;
  vector < float > consumo;

  if (values.good()) {
    values >> trashString;
    values >> cupo_tot;
    values >> trashString;
    while (!values.eof()) {
      values >> transaccion;
      consumo.push_back(transaccion);
    }
  } else {
    cerr << "/*The File Isn't Working*/" << endl;
  }
  values.close();

  consumo.pop_back();

  cout << "Tu cuenta cuenta con $" << disponible(consumo, cupo_tot) << " disponbles." << endl;

  cout << "La cuenta se pasa en la transacción: " << transcc(consumo, cupo_tot) + 1 << "." << endl;

  return 0;
}

void printVec ( vector < auto > v){
  cout << "{";
  for ( auto elem : v ) cout << elem << " ";
  cout << "}" << endl;
}

float disponible (vector < float > & consumo, float cupo_tot){
  float disp, actual = 0;
  for ( float elem : consumo){
    actual += elem;
  }
  disp = cupo_tot - actual;
  return disp;
}

int transcc ( vector < float> & consumo, float cupo_tot){
  float total = 0;
  int sz = consumo.size()-1, ind = -1;
  for (int i = 0; i <= sz; i++){
    if ( (consumo[i]+total) < cupo_tot) {
      total += consumo[i];
    } else {
      ind = i;
      break;
    }
  }
  return ind;
}
