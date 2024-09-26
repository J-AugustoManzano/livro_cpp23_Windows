// C07EX12.CPP

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
  size_t i, j;
  uint32_t linhas, colunas;

  cout << "Entre a quantidade de linhas ...: ";
  cin >> linhas;
  cin.ignore(80, '\n');

  cout << "Entre a quantidade de colunas ..: ";
  cin >> colunas;
  cin.ignore(80, '\n');

  vector<vector<uint32_t>> 
    matriz(linhas, vector<uint32_t>(colunas));

  cout << endl;

  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      cout << "Entre valor para matriz[";
      cout << i + 1 << "," << j + 1 << "] = ";
      cin >> matriz[i][j];
      cin.ignore(80, '\n');
    }
  }

  cout << endl;
  cout << "Os valores informados sao:\n" << endl;

  // Exibindo os valores da matriz
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      cout << "MATRIZ[" << i + 1 << "," << j + 1 << "] = ";
      cout << setw(4) << matriz[i][j] << endl;
    }
  }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
