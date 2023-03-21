#include<iostream>

using namespace std;

int main(){
    
    double produto, chute1;
    char chute2;
    
    cin >> chute1 >> chute2 >> produto;
    
    if(chute2 == 'm'){
        if(produto < chute1){
            cout << "segundo" << endl;
        }else{
            cout << "primeiro" << endl;
        }
    }else{
        if(produto > chute1){
            cout << "segundo" << endl;
        }else{
            cout << "primeiro" << endl;
        }
    }
    
    return 0;
}