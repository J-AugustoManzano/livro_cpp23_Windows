// C07EX06.CPP

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(void)
{
  // Definição da matriz usando std::array
  array<array<float, 4>, 10> nota;
  size_t i, j;

  cout << "Leitura das notas" << endl;

  cout << setprecision(2) << fixed;

  // Entrada das notas
  for (i = 0; i < nota.size(); ++i) {
    cout << endl;
    cout << "Informe as notas do " << setw(2);
    cout << i + 1 << "o. aluno:" << endl << endl;
    for (j = 0; j < nota[i].size(); ++j) {
      cout << "Nota: " << j + 1 << " = ";
      cin >> nota[i][j];
      cin.ignore(80, '\n');
    }
  }

  // Apresentação das notas
  cout << endl;
  cout << "Apresentacao das notas" << endl;
  cout << endl;
  cout << setw(6) << "Aluno";
  cout << setw(9) << "Nota1";
  cout << setw(9) << "Nota2";
  cout << setw(9) << "Nota3";
  cout << setw(9) << "Nota4";
  cout << endl << endl;
  for (i = 0; i < nota.size(); i++) {
    cout << setw(6) << i + 1;
    for (j = 0; j < nota[i].size(); j++)
      cout << setw(9) << nota[i][j];
    cout << endl;
  }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
