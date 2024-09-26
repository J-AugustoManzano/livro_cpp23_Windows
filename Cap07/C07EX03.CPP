// C07EX03.CPP

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(void)
{
  array<int32_t, 10> a, b;

  cout << right;
  cout << "Exemplo de checagem de indice" << endl;
  cout << endl;

  // Entrada de dados
  for (size_t i = 0; i < a.size(); ++i)
  {
    cout << "Informe o elemento ";
    cout << setw(2) << i + 1 << ": ";
    cin >> a[i];
    cin.ignore(80, '\n');
  }

  // Processamento par ou impar
  for (size_t i = 0; i < a.size(); ++i)
    if (i % 2 == 0)
      b[i] = a[i] * 5;
    else
      b[i] = a[i] + 5;

  // apresentacao das matrizes
  for (size_t i = 0; i < a.size(); ++i)
  {
    cout << "\nA[" << setw(2) << i + 1 << "] = ";
    cout << setw(3) << a[i];
  }
  cout << endl;

  for (size_t i = 0; i < b.size(); ++i)
  {
    cout << "\nB[" << setw(2) << i + 1 << "] = ";
    cout << setw(3) << b[i];
  }
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

