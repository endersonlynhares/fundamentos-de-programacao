#include<iostream>
#include<cmath>

using namespace std;

struct Ponto{
  double x;
  double y;
};

istream& operator>>(istream& is, Ponto &ponto){
    is >> ponto.x;
    is >> ponto.y;
    
    return is;
}

double differencePoints(Ponto p1, Ponto p2){
    double result = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
    return result;
}

int main(){
    
    Ponto p1, p2;
    cin >> p1 >> p2;
    
    cout << differencePoints(p1, p2) << endl;
    
    return 0;
}