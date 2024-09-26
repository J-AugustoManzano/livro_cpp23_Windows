// C07EX09.CPP

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
  size_t tamanho;
  vector<float> matriz;

  cout << setprecision(2) << fixed;

  cout << "Entre a quantidade de elementos: ";
  cin >> tamanho;
  cin.ignore(80, '\n');

  // Redimensiona o vetor para o tamanho informado
  matriz.resize(tamanho);

  cout << endl;
  for (size_t i = 0; i < tamanho; ++i) {
    cout << "Entre um valor para a variavel MATRIZ[";
    cout << i + 1 << "] = ";
    cin >> matriz[i];
    cin.ignore(80, '\n');
  }
  cout << endl;

  cout << "Os valores informados sao:" << endl;
  cout << endl;
  for (size_t i = 0; i < tamanho; ++i) {
    cout << "MATRIZ[" << i + 1 << "] = ";
    cout << setw(4) << matriz[i] << endl;
  }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
 
