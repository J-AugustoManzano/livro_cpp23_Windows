// C06EX05.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t a, *pa = &a;

  cout << "Entre um valor inteiro: ";
  cin >> *pa;
  cin.ignore(80, '\n');

  cout << "\nValor informado = " << a << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
