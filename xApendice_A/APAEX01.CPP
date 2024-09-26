// APAEX01.CPP

#include <iostream>
#include <string>   // Funcao: substr()
#include "data.h"   // Funcao: alteraData(), mostraData()

using namespace std;

int main(void)
{
  Data data;
  string dts;
  uint16_t dia, mes, ano;

  cout << "Entre uma data no formato DD/MM/AAAA: ";
  getline(cin, dts);

  dia = stoi(dts.substr(0, 2));
  mes = stoi(dts.substr(3, 2));
  ano = stoi(dts.substr(6, 4));

  data.alteraData(dia, mes, ano);
  data.mostraData();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
