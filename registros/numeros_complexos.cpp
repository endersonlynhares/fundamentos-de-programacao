/*
    Esses exercícios estão disponíveis no github do professor Judson, 
    o conteúdo é sobre registros em c++.

    Essa atividade é referente ao lab12
    link do pdf com exercicios desse conteudo: https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab12/Lab12.pdf
*/

#include<iostream>

using namespace std;

struct ComplexNumber {
	double real; 
	int imaginary; 
	void exibir() {
		cout << real << "+" << imaginary << "i";
	};
};

void SumComplexNumber(ComplexNumber number1, ComplexNumber number2) {
	ComplexNumber sum;

	sum.real = number1.real + number2.real;
	sum.imaginary = number1.imaginary + number2.imaginary;

	cout << sum.real;
	cout << showpos;
	cout << sum.imaginary << "i";
	cout << noshowpos;
}

void MultComplexNumber(ComplexNumber number1, ComplexNumber number2) {
	ComplexNumber mult;
	mult.real = (number1.real * number2.real) - (number1.imaginary * number2.imaginary);
	mult.imaginary = (number1.imaginary * number2.real) + (number2.imaginary * number1.real);
	cout << mult.real;
	cout << showpos;
	cout << mult.imaginary << "i";
	cout << noshowpos;

}



int main() {

	ComplexNumber number1;
	number1.real = 5;
	number1.imaginary = 6;

	ComplexNumber number2;
	number2.real = 3;
	number2.imaginary = -4;

	SumComplexNumber(number1, number2);
	cout << endl;
	MultComplexNumber(number1, number2);

	return 0;
}