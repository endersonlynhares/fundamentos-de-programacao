#include<iostream>

using namespace std;

enum Sexo {masculino, feminino};

istream& operator>>(istream& is, Sexo& sexo){
  is >> sexo;

  return is;
};

ostream& operator<<(ostream& os, Sexo& sexo){
  os << sexo;

  return os;
};

int main(){
  Sexo sexo1;
  sexo1 = Sexo (1);
  cout << sexo1;

  return 0;
}