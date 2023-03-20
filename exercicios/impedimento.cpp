#include<iostream>

using namespace std;

int main(){
    
    int L, R, D;
    char decision;
    
    cin >> L >> R >> D;
    
    if((R>50) && (L< R) && (R > D)){
        decision = 'S';
    }else{
        decision = 'N';
    }
    
    cout << decision << endl;
    
    return 0;
}