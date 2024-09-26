// C06EX01.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int16_t  idade = 25;
  int16_t  *pidade = nullptr;

  pidade = &idade;

  cout << "A idade " << idade << " esta armazenada" << endl;
  cout << "no endereco de memoria " << pidade << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
