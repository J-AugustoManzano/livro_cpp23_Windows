// C03EX09.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
  float a, b, c;

  cout << "Entre o lado <A>: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Entre o lado <B>: "; cin >> b;
  cin.ignore(80, '\n');

  cout << "Entre o lado <C>: "; cin >> c;
  cin.ignore(80, '\n');

  if (a < b + c and b < a + c and c < a + b)
    if (a == b and b == c)
      cout << "Triangulo Equilatero.";
    else
      if (a == b or a == c or c == b)
        cout << "Triangulo Isosceles.";
      else
        cout << "Triangulo Escaleno.";
  else
    cout << "Valores nao formam triangulo.";

  cout << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
