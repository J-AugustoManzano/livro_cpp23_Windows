// C06EX02.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int16_t idade = 25;
  int16_t *pidade = nullptr;

  pidade = &idade;

  cout << "IDADE  = " << idade << " | End: = " << &idade;
  cout << endl;
  cout << "PIDADE = " << *pidade << " | End: = " << &pidade;
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
