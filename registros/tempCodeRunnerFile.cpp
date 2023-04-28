#include<iostream>

using namespace std;

struct Data{
  int dia;
  int mes;
  int ano;
};

istream operator>>(istream& is, Data &data){
  is >> data.dia;
  is.ignore();
  is >> data.mes;
  is.ignore();
  is >> data.ano;
  is.ignore();
}

int main(){
  Data dataNascimento;

  cin >> dataNascimento;
  

  return 0;
}