// C09EX12.CPP

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

int main(void)
{
  string mensagem;
  uint64_t tamanho;
  char* numeroCaracteres;
  ofstream arqbin("EXEMPLO6.BIN", ios::app | ios::binary);
  if (not arqbin) {
    cerr << "Erro ao abrir o arquivo." << endl;
    pausa();
    return 1;
  }
  
  cout << "Informe uma mensagem" << endl;
  cout << "--> ";
  getline(cin, mensagem);

  tamanho = mensagem.size();
  numeroCaracteres = reinterpret_cast<char*>(&tamanho);

  // Escreve o tamanho da mensagem (uint64_t) no arquivo
  arqbin.write(numeroCaracteres, sizeof(tamanho));

  // Escreve os caracteres da mensagem no arquivo
  arqbin.write(mensagem.c_str(), tamanho);

  arqbin.close();

  pausa();
  return 0;
}
