#include<iostream>

using namespace std;

int main(){
    
    int width1, length1, width2, length2, area1, area2;
    cin >> width1 >> length1 >> width2 >> length2;
    area1 = width1 * length1;
    area2 = width2 * length2;
    
    if(area1 > area2){
        cout << area1 << endl;
    }else{
        cout << area2 << endl;
    }
    
    return 0;
}