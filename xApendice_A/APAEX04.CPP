// APAEX04.CPP

#include <iostream>
#include <string>
#include "calendar.h"

using namespace std;

const string meses[] = {
  "janeiro",
  "fevereiro",
  "marco",
  "abril",
  "maio",
  "junho",
  "julho",
  "agosto",
  "setembro",
  "outubro",
  "novembro",
  "dezembro"
};

int main(int argc, char *argv[])
{
  uint16_t dia, mes, ano;
  string data;

  if (argc != 2)
  {
    cout << "Uso: dataext.exe \"dd/mm/aaaa\"" << endl;
    cout << "erro na entrada da data." << endl;
    cout << endl;
    return 1;
  }

  data = argv[1];

  if (not dataValidaFormato(data))
  {
    cout << "Formato incorreto. Use dd/mm/aaaa." << endl;
    cout << endl;
    return 1;
  }

  if (not validaData(data))
  {
    cout << "Data invalida." << endl;
    cout << endl;
    return 1;
  }

  dia = pegaDia(data);
  mes = pegaMes(data);
  ano = pegaAno(data);

  cout << dia << " de " << meses[mes - 1];
  cout << " de " << ano << endl;

  return 0;
}
