// APBEX01.CPP

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string verbo, raiz;
  uint16_t tamanho;

  cout << "Entre um verbo regular: ";
  getline(cin, verbo);
  cout << endl;

  tamanho = verbo.length();

  raiz = verbo.substr(0, tamanho - 2);

  if (tamanho >= 2 and verbo.substr(tamanho - 2) == "ar") {
    cout << "Eu " << raiz << "o" << endl;
    cout << "Tu " << raiz << "as" << endl;
    cout << "Ele " << raiz << "a" << endl;
    cout << "Nos " << raiz << "amos" << endl;
    cout << "Vos " << raiz << "ais" << endl;
    cout << "Eles " << raiz << "am" << endl;
  }
  else
    cout << "O verbo fornecido nao e valido." << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
