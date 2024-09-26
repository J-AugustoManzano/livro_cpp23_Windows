// C07EX14.CPP

#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

void uplowcase(const string &mensagem, int tipo) {
  for (char c : mensagem) {
    if (tipo == 1) {
      cout.put(toupper(c)); 
    } else {
      cout.put(tolower(c)); 
    }
  }
}

int main(void) 
{
  string mensagem;

  cout << "Entre uma mensagem: ";
  getline(cin, mensagem);
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
