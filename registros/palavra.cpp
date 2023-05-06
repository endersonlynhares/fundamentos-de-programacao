// exercicio do professor Judson, disponível em: https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab12/Lab12.pdf

#include <iostream>
#include <string>

using namespace std;

struct Palavra {
  string portugues;
  string ingles;
  string espanhol;
};

istream &operator>>(istream &is, Palavra &palavra) {

  is >> palavra.portugues;
  is >> palavra.ingles;
  is >> palavra.espanhol;

  return is;
}

ostream &operator<<(ostream &os, Palavra &palavra) {
  os << "------------------------" << endl;
  os << palavra.portugues << endl;
  os << palavra.ingles << endl;
  os << palavra.espanhol << endl;

  return os;
}

int main() {

  Palavra dicionario[10];

  int tam = sizeof(dicionario) / sizeof(Palavra);

  dicionario[0] = {"cachorro", "dog", "perro"};
  dicionario[1] = {"ola", "hello", "aceno"};

  for (int i = 2; i < tam; i++) {
    cout << "------------------------" << endl;
    cin >> dicionario[i];
  }

  for (Palavra palavra : dicionario) {
    cout << palavra;
  }

  return 0;
}
