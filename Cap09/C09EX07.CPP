// C09EX07.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  fstream arquivo("EXEMPLO4.BIN", ios::binary | ios::in);

  if (arquivo.fail()) {
    cerr << "O arquivo nao pode ser aberto" << endl;
    cerr << "***  arquivo inexistente  ***" << endl;
  } else {
    cout << "*** O arquivo foi aberto ***" << endl;
    arquivo.close();
  }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
