#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int numbers[] = {20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5};
  int n = sizeof(numbers) / sizeof(numbers[0]);
  int aux = 0;

  // o count ele diz a quantidade de instância de um determinado número em um array

  for (int number : numbers) {
    int times = count(numbers, numbers + n, number);
    if (times % 2 != 0) {
      aux = number;
    }
  }

  cout << aux << endl;

  return 0;
}
