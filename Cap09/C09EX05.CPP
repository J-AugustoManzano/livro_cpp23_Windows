// C09EX05.CPP

#include <iostream>
#include <fstream>
#include <array>

using namespace std;

int main(void)
{
  array<float, 5> num;
  const char* conteudo;
  size_t tamanho;
  ifstream arqbin("EXEMPLO2.BIN", ios::binary | ios::in);

  if (not arqbin) {
    cerr << "Erro ao abrir o arquivo." << endl;
    return 1;
  }

  cout << "Apresentacao de 5 valores numericos:" << endl;
  cout << endl;

  tamanho = num.size() * sizeof(float);
  conteudo = reinterpret_cast<const char*>(num.data());

  arqbin.read(const_cast<char*>(conteudo), tamanho);

  for (size_t i = 0; i < num.size(); ++i) {
    cout << "Valor cadastrado " << i + 1 << ": ";
    cout << num[i] << endl;
  }

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
