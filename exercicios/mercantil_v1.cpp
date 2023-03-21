#include<iostream>

using namespace std;

int main(){
    
    int produto, chute1, chute2, dif1, dif2;
    
    cin >> produto >> chute1 >> chute2;
    
    dif1 = produto - chute1 ;
    dif2 = produto - chute2 ;
    
    if(chute1 > produto){
        dif1 = chute1 - produto;
    }
    
    if(chute2 > produto){
        dif2 = chute2 - produto;
    }
    
    if(dif1 < dif2){
        cout << "primeiro" << endl;
    }else if(dif1 > dif2){
        cout << "segundo" << endl;
    }else{
        cout << "empate" << endl;
    }
    
    return 0;
} 