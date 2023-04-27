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
	double imaginary; 
};

ostream& operator<<(ostream& os, ComplexNumber &number) {
	os << number.real;
	os << showpos;
	os << number.imaginary;
	os << noshowpos;
	os << "i";

	return os;
};
 
istream& operator>>(istream& is, ComplexNumber& number) {
	is >> number.real;
	is >> number.imaginary;
	is.ignore();

	return is;
}

ComplexNumber operator+(ComplexNumber number1, ComplexNumber number2) {
	ComplexNumber sum;

	sum.real = number1.real + number2.real;
	sum.imaginary = number1.imaginary + number2.imaginary;

	return sum;
}

ComplexNumber operator*(ComplexNumber number1, ComplexNumber number2) {
	ComplexNumber mult;
	mult.real = (number1.real * number2.real) - (number1.imaginary * number2.imaginary);
	mult.imaginary = (number1.imaginary * number2.real) + (number2.imaginary * number1.real);

	return mult;
}


int main() {

	ComplexNumber a;
	cin >> a;
	ComplexNumber b;
	cin >> b;

	ComplexNumber res = a + b;

	cout << res;
	return 0;
}
