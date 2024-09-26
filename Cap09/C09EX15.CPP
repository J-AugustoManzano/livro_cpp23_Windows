// C09EX15.CPP

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

struct Pessoa {
  string nome;
  uint16_t idade;

  bool lerArq(ifstream &arqbin) {
    uint64_t tamanho;
    char* conteudo = reinterpret_cast<char*>(&tamanho);
    arqbin.read(conteudo, sizeof(tamanho));
    if (arqbin.peek() == EOF)
      return false;

    vector<char> nome(tamanho + 1);
    arqbin.read(nome.data(), tamanho);
    nome[tamanho] = '\0';
    this->nome = string(nome.data());

    char* dados = reinterpret_cast<char*>(&idade);
    arqbin.read(dados, sizeof(idade));

    return true;
  }
};

int main(void) {
  Pessoa pessoa;
  ifstream arqbin("EXEMPLO07.BIN", ios::in | ios::binary);
  if (not arqbin) {
    cerr << "Erro ao abrir o arquivo." << endl;
    pausa();
    return 1;
  }

  cout << "RELATORIO DE REGISTROS DE DADOS PESSOAIS" << endl;
  cout << endl;

  cout << setiosflags(ios::left);
  cout << setw(41) << "Nome";
  cout << resetiosflags(ios::left);
  cout << setiosflags(ios::right);
  cout << setw(9) << "Idade" << endl;
  cout << endl;

  while (pessoa.lerArq(arqbin)) {
    cout << resetiosflags(ios::right);
    cout << setiosflags(ios::left);
    cout << setw(41) << pessoa.nome;
    cout << resetiosflags(ios::left);
    cout << setiosflags(ios::right);
    cout << setw(9) << pessoa.idade << endl;
  }

  arqbin.close();

  pausa();
  return 0;
}
