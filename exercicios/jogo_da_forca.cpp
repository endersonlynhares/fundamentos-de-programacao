#include<iostream>
#include<string>

using namespace std;

int main(){
    string value("paralelepipedo");
    char letter;
    int counter = value.size();
    char auxValue[counter];
    int num = value.size();
    bool win = false;

    for(int aux = 0; aux < value.size(); aux++){
        auxValue[aux] = '_';
    }


    while(!win){    
        cout << "Digite uma letra: " << endl;
        cin >> letter;
        for(int i =0; i < value.size(); i++){
            if(auxValue[i] < 'a' || auxValue[i] > 'z'){ //2
                if(value[i] == letter){
                    auxValue[i] = letter;
                    num--;
                    if(num == 0){
                        win = true;
                        break;
                    }
                }
            }
        }

		cout << auxValue << endl;
    }


    if(win){
        cout << endl << "============" << "\n" << "  Vencedor  " << "\n" << "============" << endl;
    }

    return 0;
}
