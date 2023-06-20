#include<iostream>
#include<string>
using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

istream& operator>>(istream& is, Data &data){
    is >> data.dia;
    is >> data.mes;
    is >> data.ano;
    
    return is;
}

string compararDatas(Data dt1, Data dt2){
    if(dt1.ano > dt2.ano){
        return "Mais recente";
    }else if(dt1.ano < dt2.ano){
        return "Mais antiga";
    }else{
        if(dt1.mes > dt2.mes){
            return "Mais recente";
        }else if(dt1.mes < dt2.mes){
            return "Menos antiga";
        }else{
            if(dt1.dia > dt2.dia){
                return "Mais recente";
            }else if(dt1.dia < dt2.dia){
                return "Mais antiga";
            }else{
                return "Iguais";
            }
        }
    }

}
int main(){
    
    Data dt1;
    Data dt2;
    
    cin >> dt1 >> dt2;
    
    cout << compararDatas(dt1, dt2) << endl;
    
    return 0;
}