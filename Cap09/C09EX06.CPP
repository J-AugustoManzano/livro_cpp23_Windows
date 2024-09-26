// C09EX06.CPP

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
  int32_t num;
  char resp{'S'};
  fstream arqbin("EXEMPLO3.BIN",
    ios::binary | ios::in | ios::out | ios::app);

  cout << "Entrada de valores" << endl;
  cout << endl;

  if (not (arqbin.is_open() == true)) {
    cerr << "Erro ao abrir o arquivo." << endl;
    cerr << "Programa abortado." << endl;
    pausa();
    return 1;
  }

  do {
    cout << "Informe um numero inteiro: ";
    cin >> num;
    cin.ignore(80, '\n');

    arqbin.write(reinterpret_cast<char*>(&num), sizeof(num));

    cout << "Deseja continuar?" << endl;
    cout << "Tecle [S] p/ SIM | outra letra p/ NAO: ";
    cin.get(resp);
    cin.ignore();
    cout << endl;
  } while (toupper(resp) == 'S');

  arqbin.clear();
  arqbin.seekg(0, ios::beg);

  cout << "Valores no arquivo: ";
  while (true) {
    arqbin.read(reinterpret_cast<char*>(&num), sizeof(num));
    if (arqbin.gcount() == 0)
      break;
    cout << num << " ";
  }
  cout << endl;

  arqbin.close();

  pausa();
  return 0;
}
