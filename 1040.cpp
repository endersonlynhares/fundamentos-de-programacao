#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
  
  double n1, n2, n3, n4, n5, average;
  string situation;

  cin >> n1 >> n2 >> n3 >> n4;

  average = (n1 * 2) + (n2 * 3) + (n3 * 4) + (n4);
  average /= 10;

  if(average >= 7){
    situation = "Approved student";
  }else if(average < 5){
    situation = "Reproved student";
  }else{
    situation = "In exam student";
  }

  if(situation == "In exam student"){
    cin >> n5;
    average += n5;
    average /= 2;
  }

  cout << "Average: " << fixed << setprecision(1) << average << endl;
  cout << situation << endl;
  if(situation == "In exam student"){
    cout << "Nota do exame: " << n5 << endl;
    if(average >=5){
      situation = "Approved student";
    }else{
      situation = "Reproved student";
    }
    cout << situation << endl;
    cout << "Final average: " << fixed << setprecision(1) << average << endl;
  }

  return 0;
}