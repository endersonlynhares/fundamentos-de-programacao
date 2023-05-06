#include <iostream>
#include <typeinfo>

using namespace std;

enum direcao
{
  N,
  NE,
  E,
  SE,
  SW,
  W,
  NW
};

union identificador
{
  char codigo[5];
  int numero;
};

struct bola
{
  identificador id;
  char marca[30];
  int posX;
  int posY;
  direcao dir;
  float vel;
  float acel;
};

int main()
{
  bola proVolley[10];
  direcao dir;
  dir = direcao (3);

  cout << dir << endl;

  // cout << typeid(proVolley).name() << endl;
  // cout << typeid(proVolley[4]).name() << endl;
  // cout << typeid(proVolley[0].marca).name() << endl;
  // cout << typeid(proVolley[0].marca[2]).name() << endl;
  // cout << typeid(proVolley[0].dir).name() << endl;
  // cout << typeid(proVolley[2].id).name() << endl;
  // cout << typeid(proVolley[3].id.numero).name() << endl;
  // cout << typeid(proVolley[3].acel).name() << endl;
  return 0;
}