// C09EX14.CPP

#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

struct Pessoa {
  string nome;
  uint16_t idade;

  void escreverArq(ofstream& arqbin) {
    uint64_t tamanho = nome.size();
    char* nomeCad = reinterpret_cast<char*>(&tamanho);
    char* idadeCad = reinterpret_cast<char*>(&idade);
    arqbin.write(nomeCad, sizeof(tamanho));
    arqbin.write(nome.c_str(), tamanho);
    arqbin.write(idadeCad, sizeof(uint16_t));
  }
};

int main(void)
{
  char resp;
  ofstream arqbin("EXEMPLO07.BIN", ios::app | ios::binary);
  if (not arqbin) {
    cerr << "Erro ao abrir o arquivo." << endl;
    pausa();
    return 1;
  }

  cout << "CADASTRO DE REGISTRO DE DADOS PESSOAIS" << endl;

  do {
    cout << endl;
    cout << "Entre nome ...: ";
    string nome;
    getline(cin, nome);
    cout << "Entre idade ..: ";
    uint16_t idade;
    cin >> idade;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Pessoa pessoa;
    pessoa.nome = nome;
    pessoa.idade = idade;

    pessoa.escreverArq(arqbin);

    cout << endl;
    cout << "Deseja continuar? [S] Sim ";
    cout << "[qualquer letra] Nao --> ";
    cin.get(resp);
    cin.ignore();
  } while (toupper(resp) == 'S');

  arqbin.close();

  pausa();
  return 0;
}
