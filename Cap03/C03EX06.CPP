// C03EX06.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
  int32_t codigo;

  cout << "Entre o codigo de acesso: "; cin >> codigo;
  cin.ignore(80, '\n');

  cout << endl;

  if (codigo == 1 or codigo == 2 or codigo == 3)
    {
      if (codigo == 1)
        cout << "Foi acionado o codigo: um.\n";
      if (codigo == 2)
        cout << "Foi acionado o codigo: dois.\n";
      if (codigo == 3)
        cout << "Foi acionado o codigo: tres.\n";
    }
  else
    cout << "Codigo invalido.\n";

  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
