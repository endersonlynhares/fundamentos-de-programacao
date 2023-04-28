#include<iostream>

using namespace std;

struct Data{
  int dia;
  int mes;
  int ano;
};

istream& operator>>(istream& is, Data& data){
  is >> data.dia;
  is.ignore();
  is >> data.mes;
  is.ignore();
  is >> data.ano;
  is.ignore();

  return is;
}

ostream& operator<<(ostream& os, Data& data){

  os << (data.dia < 10 ? "0" : "") << data.dia << "/";
  os << (data.mes < 10 ? "0" : "") << data.mes << "/";
  os << data.ano;

  return os;
}

int main(){
  Data dataNascimento;
  
  cin >> dataNascimento;

  cout << dataNascimento;

  return 0;
}