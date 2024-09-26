// C03EX02.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int32_t  a, b;

  cout << "Entre o valor <A>: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Entre o valor <B>: "; cin >> b;
  cin.ignore(80, '\n');

  cout << "\n";

  if (int32_t  r = a + b; r > 10)
    cout << "Resultado = " << r << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
