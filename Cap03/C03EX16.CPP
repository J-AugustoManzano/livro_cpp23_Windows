// C03EX16.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
  int32_t n, r4, r5;

  cout << "Entre um numero natural: "; cin >> n;
  cin.ignore(80, '\n');
  cout << endl;

  r4 = n % 4;
  r5 = n % 5;

  if (r4 == 0 and r5 == 0)
    cout << "Resultado = " << n << endl;
  else
    cout << "Valor nao e divisivel por 4 e 5" << endl;

  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
