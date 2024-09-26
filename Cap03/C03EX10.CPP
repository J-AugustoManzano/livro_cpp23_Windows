// C03EX10.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float a, b, r;
  int32_t opcao;

  cout << setprecision(2) << fixed << right;

  cout << "Entre o valor <A>: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Entre o valor <B>: ";
  cin >> b;
  cin.ignore(80, '\n');

  cout << "\n";
  cout << "[1] - Adicao" << endl;
  cout << "[2] - Subtracao" << endl;
  cout << "[3] - Multiplicacao" << endl;
  cout << "[4] - Divisao" << endl;
  cout << "\n";

  cout << "Escolha uma opcao: ";
  cin >> opcao;
  cin.ignore(80, '\n');

  if (opcao == 1)
    r = a + b;
  if (opcao == 2)
    r = a - b;
  if (opcao == 3)
    r = a * b;
  if (opcao == 4)
    if (b == 0)
      r = 0;
    else
      r = a / b;

  cout << "\nResultado e igual a: " << setw(5);
  cout << r << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
