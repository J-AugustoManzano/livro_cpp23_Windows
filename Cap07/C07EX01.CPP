// C07EX01.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  float notas[8], soma = 0, media;

  cout << setprecision(2) << fixed;

  cout << "Calculo de media escolar" << endl;
  cout << endl;

  for (size_t i = 0; i <= 7; ++i) {
    cout << "Informe a " << i + 1 << "a. nota: ";
    cin >> notas[i];
    cin.ignore(80, '\n');
    soma += notas[i];
  }

  media = soma / 8;

  cout << endl;
  cout << "Media do grupo = " << setw(6) << media << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
