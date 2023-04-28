// exercicios 1 e 2 da atividade referente aos chocolates
// link do exercicio: https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab12/Lab12.pdf

#include<iostream>

using namespace std;

struct chocolate {
	string marca;
	double peso;
	int qtdCalorias;
};

ostream& operator<<(ostream& os, chocolate chocolate) {
	os << "Marca: " << chocolate.marca << endl;
	os << "Peso: " << chocolate.peso << endl;
	os << "Calorias: " << chocolate.qtdCalorias << " kcal" << endl;

	return os;
}

istream& operator>>(istream& is, chocolate &chocolate) {
	is >> chocolate.marca;
	is >> chocolate.peso;
	is >> chocolate.qtdCalorias;

	return is;
}

int main() {
  //chocolate lanche;
	//cout << lanche;
	chocolate chocolates[3];

	for (int i = 0; i < 3; i++) {
		cout << "Digite o " << (i + 1) << " chocolate: " << endl;
		chocolate lanche;
		cin >> lanche;
		chocolates[i] = lanche;
	}

	for (chocolate lanche : chocolates) {
		cout << lanche;
	}

	return 0;
}
