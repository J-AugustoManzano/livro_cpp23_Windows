// C07EX02.CPP

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(void) 
{

  array<float, 8> notas;  // Define o arranjo com 8 elementos
  
  float soma = 0, media;

  cout << setprecision(2) << fixed;

  cout << "Calculo de media escolar" << endl;
  cout << endl;

  for (size_t i = 0; i < notas.size(); ++i) {
    cout << "Informe a " << i + 1 << "a. nota: ";
    cin >> notas[i];
    cin.ignore(80, '\n');
    soma += notas[i];
  }

  media = soma / notas.size();

  cout << endl;
  cout << "Media do grupo = " << setw(6) << media << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
