// C05EX03.CPP
// Programa Fatorial

#include <iostream>
using namespace std;

void pausa(void)
{
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

void fatorial(uint16_t n)
{
  uint64_t fat {1};
  for (uint16_t i = 1; i <= n; i++)
    fat *= i;
  cout << "\nFatorial de " << n << " = a: " << fat << endl;
}

int main(void)
{
  uint16_t x;
  cout << "Calculo de fatorial" << endl;
  cout << "\nEntre um valor inteiro: "; cin >> x;
  cin.ignore(80, '\n');
  fatorial(x);
  fatorial(6);
  pausa();
  return 0;
}
