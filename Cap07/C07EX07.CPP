// C07EX07.CPP

#include <iostream>
#include <iomanip>
#include <array>
#include <string> // Para uso de string

using namespace std;

int main() 
{
  // Definição do arranjo usando std::array
  array<string, 10> nome;
  size_t i;

  cout << "Leitura e apresentacao de nomes" << endl;
  cout << endl;

  // Entrada dos nomes
  for (i = 0; i < nome.size(); ++i) {
    cout << "Informe o " << setw(2) << i + 1;
    cout << "o. nome: ";
    getline(cin, nome[i]);
  }
  cout << endl;

  // Apresentação dos nomes
  for (i = 0; i < nome.size(); ++i) {
    cout << setw(2) << i + 1 << " nome: " << nome[i] << endl;
  }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
