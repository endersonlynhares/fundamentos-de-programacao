#include<iostream>

using namespace std;

void jokenpo(char option1, char option2){
   if(option1 == option2){
       cout << "empate" << endl;
   }
   else if((option1 == 'R' && option2 == 'S') || (option1 == 'S' && option2 == 'P') ||(option1 == 'P' && option2 == 'R') ){
       cout << "jog1" << endl;
   }else{
       cout << "jog2" << endl;
   }
}

int main(){
    
    char option1, option2;
    
    cin >> option1 >> option2;
    
    jokenpo(option1, option2);
    
    return 0;
}