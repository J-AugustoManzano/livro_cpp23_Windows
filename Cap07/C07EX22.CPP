// C07EX22.CPP

#include <iostream>

using namespace std;

using integer = int32_t;
using real = float;

int main(void)
{

  integer a;
  real b;

  cout << "Entre um valor inteiro: ";
  cin >> a;
  cin.ignore(80, '\n');
  cout << "Foi informado o valor: " << a << endl;

  cout << endl;
  cout << "Entre um valor real: ";
  cin >> b;
  cin.ignore(80, '\n');
  cout << "Foi informado o valor: " << b << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
