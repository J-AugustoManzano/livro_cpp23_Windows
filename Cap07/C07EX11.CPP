// C07EX11.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  size_t i, j;
  uint32_t linhas, colunas;
  uint32_t **pmatriz;

  cout << "Entre a quantidade de linhas ...: ";
  cin >> linhas;
  cin.ignore(80, '\n');

  cout << "Entre a quantidade de colunas ..: ";
  cin >> colunas;
  cin.ignore(80, '\n');

  pmatriz = new uint32_t*[linhas];

  for (i = 0; i <= linhas - 1; i++)
    pmatriz[i] = new uint32_t[colunas];
  cout << endl;

  for (i = 0; i <= linhas - 1; i++) {
    for (j = 0; j <= colunas - 1; j++) {
      cout << "Entre valor para matriz[";
      cout << i + 1 << "," << j + 1 << "] = ";
      cin >> pmatriz[i][j];
      cin.ignore(80, '\n');
    }
  }

  cout << endl;
  cout << "Os valores informados sao:\n" << endl;
  for (i = 0; i <= linhas - 1; i++) {
    for (j = 0; j <= colunas - 1; j++) {
      cout << "MATRIZ[" << i + 1 << "," << j + 1;
      cout << "] = ";
      cout << setw(4) << pmatriz[i][j] << endl;
    }
  }

  for (i = 0; i <= linhas - 1; i++)
    delete [] pmatriz[i];
  delete [] pmatriz;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
