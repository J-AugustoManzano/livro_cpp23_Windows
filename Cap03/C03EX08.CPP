// C03EX08.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
  int32_t numero;

  cout << "Informe numero inteiro: ";
  cin >> numero;
  cin.ignore(80, '\n');

  if (not(numero == 5))
      cout << "O numero nao e igual a 5." << endl;
  else
      cout << "O numero e igual a 5." << endl;

  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
