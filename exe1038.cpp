#include<iostream>

using namespace std;

int main(){

  cout << "Code |   Specification   |   Price\n"
       << "1    |   Cachorro Quente |   4,00\n"
       << "2    |   X-salada        |   4,50\n"
       << "3    |   X-bacon         |   5,00\n"
       << "4    |   Torrada simples |   2,00\n"
       << "5    |   Refrigerante    |   1,50" << endl;
  
  int X, Y;
  double value;

  cin >> X >> Y;

  switch(X){
    case 1: 
      value = Y * 4;
    case 2: 
      value = Y * 4.5;
    case 3: 
      value = Y * 5;
    case 4: 
      value = Y * 2;
    case 5: 
      value = Y * 1.50;
  }

  cout << value;

  return 0;
}