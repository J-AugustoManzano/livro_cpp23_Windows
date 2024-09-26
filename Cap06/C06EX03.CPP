// C06EX03.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int16_t idade = 25;
  int16_t *pidade = &idade;

  cout << "A idade " << *pidade << " esta" << endl;
  cout << "no endereco de memoria " << pidade << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
