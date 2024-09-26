// C03EX07.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int32_t prova1, prova2;

int main(void)
{

  cout << "Entre \"1\" se atleta pontuou na 1a. prova.";
  cout << endl;

  cout << "Entre \"1\" se atleta pontuou na 2a. prova.";
  cout << endl;

  cout << "Qualquer outro valor se nao pontuou." << endl;
  cout << endl;

  cout << "Prova 1: ";
  cin >> prova1;
  cin.ignore(80, '\n');

  cout << "Prova 2: ";
  cin >> prova2;
  cin.ignore(80, '\n');

  if ((prova1 == 1) xor (prova2 == 1))
    cout << "Atleta realiza terceira prova." << endl;
  else {
    cout << "Atleta nao realiza terceira prova." << endl;
    if ((prova1 == 1) && (prova2 == 1))
      cout << "Classificado para a final." << endl;
    else
      cout << "Desclassificado da competicao." << endl;
  }

  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
