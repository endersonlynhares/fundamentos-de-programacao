//questão disponível no moodle

#include<iostream>
#include<cmath>

using namespace std;

struct Ponto{
    float x;
    float y;
};

float distancia(Ponto ponto1, Ponto ponto2){
    //formula = raizQuadrada((y2 - y1)^2 + (x2 - x1)^2)
    
    float distancia = sqrt(pow((ponto2.y - ponto1.y), 2) + pow((ponto2.x - ponto1.x), 2));

    return distancia;
}

int main(){
    
    Ponto pontos[2];
    float resultado = 0;
    
    for(int i = 0; i < 2; i++){
        Ponto ponto;
        
        cin >> ponto.x;
        cin >> ponto.y;
        
        pontos[i] = ponto;
    }
    
    resultado = distancia(pontos[0], pontos[1]);
    
    cout.precision(2);
    cout << fixed << resultado << endl;
    
    return 0;
}
