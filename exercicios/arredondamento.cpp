#include<iostream>
#include<cmath>

using namespace std;

int main(){
    
    char op;
    float average;
    
    cin >> op >> average;
    
    if(op == 'r'){
        cout << round(average) << endl;
    }else if(op == 'c'){
        cout << ceil(average) << endl;
    }else{
        cout << floor(average) << endl;
    }
    
    return 0;
}