// exercicio do pdf do professor Judson, o qual está disponível em: https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab12/Lab12.pdf

#include <iostream>
#include <string>

using namespace std;

struct ContaBancaria {
  int id;
  string nome;
  double saldo = 0;
  void depositar() {
    float deposito;

    cin >> deposito;

    saldo += deposito;
  };
};

istream &operator>>(istream &is, ContaBancaria &conta) {

  is >> conta.id;
  is >> conta.nome;
  is >> conta.saldo;

  return is;
}

int main() {

  ContaBancaria conta;
  float deposito;

  cin >> conta;

  cout << "Quanto você quer depositar?" << endl;
  conta.depositar();

  cout << conta.saldo << endl;

  return 0;
}
