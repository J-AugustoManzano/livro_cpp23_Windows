// C09EX01.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void) 
{
  ofstream arqtxt("EXEMPLO1.TXT", ios::trunc);

  if (not arqtxt) {
    cerr << "Erro ao criar o arquivo." << endl;
    return 1;
  }

  cout << "Arquivo criado com sucesso." << endl;
  
  arqtxt.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
