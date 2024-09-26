// C03EX03.CPP

#include <iostream>
using namespace std;

int main(void)
{

  int32_t  a, b, x;

  cout << "Entre o primeiro valor..: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Entre o segundo valor...: "; cin >> b;
  cin.ignore(80, '\n');

  cout << "\n";
  if (a > b)
    {
      x = a;
      a = b;
      b = x;
    }

  cout << "Os valores ordenados sao: " << a;
  cout << " e " << b << "." << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
