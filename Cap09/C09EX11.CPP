// C09EX11.CPP

#include <iostream>
#include <iomanip>
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
  uint64_t pos;
  char* conteudo = reinterpret_cast<char*>(&valor);
  size_t tamanho = sizeof(valor);
  char resp;
  uint64_t tamanhoArquivo, tamanhoRegistro, nrRegs;
  fstream arqbin;

  arqbin.open("EXEMPLO5.BIN", ios::in | ios::out 
              | ios::binary);
  if (not arqbin) {
    cerr << "Erro ao abrir o arquivo." << endl;
    pausa();
    return 1;
  }

  arqbin.seekg(0, ios::end);

  tamanhoArquivo = arqbin.tellg();
  tamanhoRegistro = sizeof(valor);
  if (tamanhoRegistro == 0)
    nrRegs = 0;
  else
    nrRegs = tamanhoArquivo / tamanhoRegistro;

  cout << "PESQUISA DIRETA E ESCRITA DE VALORES" << endl;
  cout << endl;
  if (nrRegs == 0)
    cout << "O arquivo esta vazio." << endl;
  else
    {
      cout << "O arquivo possui " << nrRegs;
      if (nrRegs == 1)
        cout << " registro." << endl;
      else
        cout << " registros." << endl;
    }

  do {
    cout << endl;
    cout << "Entre a posicao a ser pesquisada: ";
    cin >> pos;
    cin.ignore(80, '\n');
    cout << endl;
    if (pos >= 1 and pos <= nrRegs) {
      arqbin.seekg((pos - 1) * sizeof(valor), ios::beg);
      arqbin.read(conteudo, tamanho);
      cout << "Valor " << valor << " na posicao ";
      cout << pos << endl;
      cout << endl;
      cout << "Entre o novo valor: ";
      cin >> valor;
      cin.ignore(80, '\n');
      cout << endl;
      arqbin.seekp((pos - 1) * sizeof(valor), ios::beg);
      arqbin.write(conteudo, tamanho);
      cout << "Valor " << valor << " na posicao ";
      cout << pos << endl;
    }
    else
      cerr << "Posicao informada - invalida." << endl;
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
