// C06EX07.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t idade = 25;
  int32_t *pidade = nullptr;

  pidade = &idade;

  cout << "Variavel IDADE ....: " << idade << endl;
  cout << "Ponteiro PIDADE ...: " << pidade << endl;

  (*pidade)++;

  cout << "Variavel IDADE ....: " << idade << endl;
  cout << "Ponteiro PIDADE ...: " << pidade << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
