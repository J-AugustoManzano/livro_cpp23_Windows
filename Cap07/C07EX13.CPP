// C07EX13.CPP

#include <iostream>
#include <cctype> // Para toupper() e tolower()

using namespace std;

void uplowcase(char *pmatriz, int tipo) {
  if (tipo == 1) {
    // Converte para maiúsculas
    while (*pmatriz)
      cout.put(toupper(*pmatriz++));
  } else {
    // Converte para minúsculas
    while (*pmatriz)
      cout.put(tolower(*pmatriz++));
  }
}

int main(void) 
{
  char mensagem[50]; // Simulação de uma cadeia

  cout << "Entre uma mensagem: ";
  cin.getline(mensagem, sizeof(mensagem));

  cout << endl;

  uplowcase(mensagem, 1); // Apresenta em maiúsculas
  cout << endl;

  uplowcase(mensagem, 2); // Apresenta em minúsculas
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
