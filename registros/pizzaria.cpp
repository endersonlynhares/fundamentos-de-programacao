#include<iostream>

using namespace std;

struct Restaurante{
    string nome;
    int pontuacao;
};

istream& operator>>(istream& is, Restaurante &rest){
    is >> rest.nome;
    is >> rest.pontuacao;
    
    return is;
}

int main(){
    
    int qtd_rest, indiceMaiorPontuacao = 0;
    
    cin >> qtd_rest;
    
    Restaurante restaurantes[qtd_rest];
    
    for(Restaurante& rest : restaurantes){
        cin >> rest;
    }
    
    for(int i = 0; i < qtd_rest; i++){
        if(i == 0){
            indiceMaiorPontuacao = i;
        }else{
            if(restaurantes[i].pontuacao >= restaurantes[indiceMaiorPontuacao].pontuacao){
                indiceMaiorPontuacao = i;
            }
        }
    }
    
    cout << restaurantes[indiceMaiorPontuacao].nome << endl;
    
    return 0;
}