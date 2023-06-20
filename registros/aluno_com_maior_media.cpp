#include<iostream>

using namespace std;

struct Registro{
  string nome;
  int matricula;
  string disciplina;
  double nota;
};

istream& operator>>(istream& is, Registro &res){
    is >> res.nome; 
    is >> res.matricula;
    is >> res.disciplina;
    is >> res.nota;
    
    return is;
}

void maiorNota(Registro aluno1, Registro aluno2){
    cout.precision(1);
    if(aluno1.nota > aluno2.nota){
        cout << aluno1.nome << " , " << fixed << aluno1.nota << endl;
    }else if(aluno1.nota < aluno2.nota){
        cout << aluno2.nome << " , " << fixed << aluno2.nota << endl;
    }else{
        cout << aluno1.nome << " e " << aluno2.nome << " , " << fixed << aluno1.nota << endl;
    }
    
}

int main(){
    
    Registro alunos[2];
    
    for(Registro& aluno : alunos){
        cin >> aluno;
    }
    
    maiorNota(alunos[0], alunos[1]);
    
    return 0;
}