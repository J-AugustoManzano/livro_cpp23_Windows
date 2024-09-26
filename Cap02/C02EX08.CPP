// C02EX08.CPP

#include <iostream> 
using namespace std;

int main(void)
{
  float ht, vh, pd, td, sb, sl;

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
  cout << "Salario Bruto ....: " << sb << endl;
  cout << "Desconto .........: " << td << endl;
  cout << "Salario Liquido ..: " << sl << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
