// C09EX13.CPP

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

int main(void)
{
  uint64_t tamanho;
  char* numeroCaracteres = reinterpret_cast<char*>(&tamanho);
  ifstream arqbin("EXEMPLO6.BIN", ios::binary);
  if (not arqbin) {
    cerr << "Erro ao abrir o arquivo." << endl;
    pausa();
    return 1;
  }

  // Lê do arquivo enquanto não chegar ao final
  while (arqbin.read(numeroCaracteres, sizeof(tamanho))) {
    vector<char> mensagem(tamanho);
    // Lê a mensagem
    arqbin.read(mensagem.data(), tamanho);
    cout << "Mensagem: " << mensagem.data() << endl;
  }

  arqbin.close();
  pausa();
  return 0;
}
