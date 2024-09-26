// C05EX11.CPP

#include <iostream>

using namespace std;

float a, b, r;

void soma(void)
{
  cout << "Entre o 1o. numero: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Entre o 2o. numero: ";
  cin >> b;
  cin.ignore(80, '\n');

  r = a + b;
}

int main(void)
{
  cout << "Calculadora de Soma" << endl;
  soma();

  cout << "O resultado da soma e: " << r << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
