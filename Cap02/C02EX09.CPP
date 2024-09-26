// C02EX09.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float ht, vh, pd, td, sb, sl;

  cout << setprecision(2) << fixed << right;

  cout << "Entre a quantidade de horas trabalhadas ...: ";
  cin >> ht;
  cin.ignore(80, '\n');

  cout << "Entre o valor da hora de trabalho .........: ";
  cin >> vh;
  cin.ignore(80, '\n');

  cout << "Entre o valor do percentual de desconto ...: ";
  cin >> pd;
  cin.ignore(80, '\n');

  sb = ht * vh;
  td = (pd / 100) * sb;
  sl = sb - td;

  cout << "\n";
  cout << "Salario Bruto ....: " << setw(8) << sb << endl;
  cout << "Desconto .........: " << setw(8) << td << endl;
  cout << "Salario Liquido ..: " << setw(8) << sl << endl;

  cout << "\n";
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
