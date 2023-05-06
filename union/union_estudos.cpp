#include<iostream>
#include<string>

//guardar duas coisas que estão relacionadas → UNION
//é usado para economizar memoria, o qual uma entidade utiliza um ou outro tipo de valor

union Regkey{
  int key;
  char code[10];
}

struct Software{
  string name;
  Regkey serial;
  float preco;
  bool typeKey;
}

using namespace std;

union Person{
  string name;
  int age;
}

int main(){



  return 0;
}