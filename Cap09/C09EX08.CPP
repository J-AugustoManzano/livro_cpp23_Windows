// C09EX08.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  fstream arqbin("EXEMPLO4.BIN", ios::in | ios::binary);

  if (arqbin.fail()) {
    cout << "O arquivo nao existe, criando..." << endl;
    arqbin.clear(); 
    arqbin.open("EXEMPLO4.BIN", ios::out | ios::binary);

    if (arqbin.fail()) 
      cerr << "Erro ao criar o arquivo." << endl;
    else
      cout << "Arquivo criado com sucesso!" << endl;
  }
  else
    cout << "O arquivo ja existe." << endl;

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
