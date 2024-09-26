// C09EX09.CPP

#include <iostream>
#include <cctype>
#include <fstream>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

int main(void)
{
  int32_t valor;
  char* conteudo = reinterpret_cast<char*>(&valor);
  size_t tamanho = sizeof(valor);
  char resp;
  ofstream arqbin;

  arqbin.open("EXEMPLO5.BIN", ios::app | ios::binary);
  if (not arqbin) {
    cerr << "Erro ao abrir o arquivo." << endl;
    pausa();
    return 1;
  }

  cout << "CADASTRO SEQUENCIAL DE VALORES" << endl;

  do {
    cout << endl;
    cout << "Entre um valor: ";
    cin >> valor;
    cin.ignore(80, '\n');
    arqbin.write(conteudo, tamanho);
    cout << endl;
    cout << "Deseja continuar? " << endl;
    cout << "[S] Sim \n[qualquer letra] Nao\n\n--> ";
    cin.get(resp);
    cin.ignore();
  } while (toupper(resp) == 'S');

  arqbin.close();

  pausa();  
  return 0;
}
