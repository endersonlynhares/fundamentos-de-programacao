#include<iostream>
#include<iomanip>

using namespace std;

int main(){

  int price, discount;
  double priceWithDiscount, percentage;

  cin >> price >> discount;

  percentage = (double) discount / 100;
  priceWithDiscount = price - (price * percentage);
 

  cout << fixed << setprecision(2) << priceWithDiscount << endl;

  return 0;
}