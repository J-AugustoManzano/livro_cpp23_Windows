// C04EX05.CPP

#include <iostream>

using namespace std;

int main(void)
{
  uint16_t n;
  uint16_t fat = 1;

  cout << "Programa Fatorial" << endl << endl;
  cout << "Fatorial de que valor: "; cin >> n;
  cin.ignore(80, '\n');

  for (uint16_t i = 1; i <= n; ++i)
    fat *= i;

  cout << endl;
  cout << "Fatorial de " << n << " = " << fat << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
