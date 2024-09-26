// APAEX08.CPP

#include <iostream>
#include <string>
#include <ctime>
#include "calendar.h"

using namespace std;

void idade(string dtNasc, int16_t &a, int16_t &m, int16_t &d)
{
  time_t t = time(nullptr);
  tm* tmAtual = localtime(&t);

  // Data nascimento: dia, mes e ano
  int16_t diaNasc = pegaDia(dtNasc);
  int16_t mesNasc = pegaMes(dtNasc);
  int16_t anoNasc = pegaAno(dtNasc);

  // Data atual: dia, mes e ano
  int16_t diaAtual = tmAtual->tm_mday;
  int16_t mesAtual = tmAtual->tm_mon + 1;
  int16_t anoAtual = tmAtual->tm_year + 1900;

  // Calcula a idade
  a = anoAtual - anoNasc;
  m = mesAtual - mesNasc;
  if (m < 0) { // Se mes nao ocorreu neste ano
    a--;
    m += 12;
  }
  d = diaAtual - diaNasc;
  if (d < 0) { // Se dia nao ocorreu neste mes
    m--;
    d += ultimoDiaNoMes(dtNasc);
  }

}

int main(void)
{
  string dtNasc;
  int16_t anos, meses, dias;

  cout << "Entre data de nascimento (DD/MM/AAAA): ";
  cin >> dtNasc;
  cin.ignore(80, '\n');

  if (dataValidaFormato(dtNasc) and validaData(dtNasc)) {
    idade(dtNasc, anos, meses, dias);
    cout << "Idade: ";
    cout << anos  << " anos, ";
    cout << meses << " meses e ";
    cout << dias  << " dias." << endl;
  }
  else
    cout << "Data invalida" << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
