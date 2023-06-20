#include<iostream>

using namespace std;

struct Aluno{
  string nome;
  double notas[3];
};

void cinAluno(Aluno &aluno){
    cin >> aluno.nome;
    for(double &nota : aluno.notas){
        cin >> nota;
    }
}

int main(){
    
    Aluno aluno;
    double media = 0;
    cinAluno(aluno);
    
    for(double nota : aluno.notas){
        media += nota; 
    }
    
    media /= 3;
    cout.precision(2);
    cout << fixed << media << endl;
    
    return 0;
}