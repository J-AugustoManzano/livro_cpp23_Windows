// C07EX04.CPP

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(void)
{
  array<int32_t, 5> a;
  int32_t soma = 0;

  cout << right;
  cout << "Somatorio de elementos impares" << endl;
  cout << endl;

  // Entrada de dados
  for (size_t i = 0; i < a.size(); ++i)
  {
    cout << "Informe o elemento ";
    cout << setw(1) << i + 1 << ": ";
    cin >> a[i];
    cin.ignore(80, '\n');
  }

  // Processamento par ou impar
  for (size_t i = 0; i < a.size(); ++i)
    if (a[i] % 2 != 0)
      soma += a[i];

  // Apresentacao da soma
  cout << "\nA soma dos elementos impares equivale a: ";
  cout << soma << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
