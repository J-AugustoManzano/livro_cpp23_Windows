// C04EX02.CPP

#include <iostream>
#include <cctype> // para usar: toupper()

using namespace std;

int main(void)
{
  uint16_t n, i = 1;
  uint16_t fat {1};
  char resp {'S'};

  while (toupper(resp) == 'S')
    {
      cout << "Programa Fatorial" << endl << endl;
      cout << "Fatorial de que valor: "; cin >> n;
      cin.ignore(80, '\n');

      while (i <= n)
        {
           fat *= i;
           ++i;
        }

      cout << endl;
      cout << "Fatorial de " << n << " = "<< fat << endl;
      cout << endl;

      cout << "Deseja continuar?" << endl;
      cout << "Tecle [S] p/ SIM | outra letra p/ NAO: ";
      cin.get(resp);
      cin.ignore();
      cout << endl;
    }

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
