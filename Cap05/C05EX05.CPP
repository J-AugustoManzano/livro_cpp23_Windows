// C05EX05.CPP
// Programa Fatorial

#include <iostream>
using namespace std;

void pausa(void)
{
  cout << "\nTecle <Enter> para encerrar... ";
  cin.get();
}

uint64_t fatorial(int n)
{
  uint16_t i; 
  uint64_t fat = 1;
  for (i = 1; i <= n; i++)
    fat *= i;
  return fat;
}

int main(void)
{
  uint16_t x;
  cout << "Calculo de fatorial\n";
  cout << "\nEntre um valor inteiro: "; cin >> x;
  cin.ignore(80, '\n');
  cout << "\nFatorial de " << x << " = a: ";
  cout << fatorial(x) << endl;
  pausa();
  return 0;
}
