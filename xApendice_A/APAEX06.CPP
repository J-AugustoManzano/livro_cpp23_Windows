// APAEX06.CPP
// Algoritmo de Computus

#include <iostream>
#include <iomanip>
#include "calendar.h"

using namespace std;

string calcularPascoa(uint16_t ano) {
  uint16_t sec = ano / 100;
  uint16_t a = ano - 100 * sec;
  uint16_t x = (5 * sec + a) / 19;
  uint16_t aLunar = 5 * sec + a - 19 * x;
  uint16_t biss = (3 * (sec + 25)) / 4;
  uint16_t aposBiss = 3 * (sec + 25) - 4 * biss;
  uint16_t octa = (8 * (sec + 11)) / 25;
  x = (19 * aLunar + biss - octa) / 30;
  uint16_t dia = 19 * aLunar + biss - octa - 30 * x;
  uint16_t mes = (aLunar + 11 * dia) / 319;
  uint16_t aAposMes = (60 * (5 - aposBiss) + a) / 4;
  uint16_t dAposAno = 60 * (5 - aposBiss) + a - 4 * aAposMes;
  x = (2 * aAposMes - dAposAno - dia + mes) / 7;
  uint16_t diaPasc = 2 * aAposMes - dAposAno -
      dia + mes - 7 * x;
  uint16_t mesPasc = (dia - mes + diaPasc + 110) / 30;
  uint16_t diaPascFinal = dia - mes + diaPasc + 110 - 30 *
      mesPasc;
  uint16_t diaFinal = diaPascFinal + 5 - mesPasc;
  string diaFmt = (diaFinal < 10) ? "0" +
         to_string(diaFinal) : to_string(diaFinal);
  string mesFmt = (mesPasc < 10) ? "0" +
         to_string(mesPasc) : to_string(mesPasc);
  string anoFmt = to_string(ano);
  return diaFmt + "/" + mesFmt + "/" + anoFmt;
}

int main(void)
{
  uint16_t ano;
  string dataPascoa;
  uint64_t dj;

  do {
    cout << "Entre ano (1583-9999): ";
    cin >> ano;
    cin.ignore(80, '\n');

   if (ano < 1583 or ano > 9999)
     cout << "Ano fora do intervalo." << endl;

  } while (not (ano >= 1583 and ano <= 9999));

  dataPascoa = calcularPascoa(ano);
  dj = dataParaJuliano(dataPascoa);

  cout << endl;
  cout << "Carnaval em ........: ";
  cout << julianoParaData(dj - 47) << endl;
  cout << "Pascoa em ..........: ";
  cout << dataPascoa << endl;
  cout << "Corpus Christi em ..: ";
  cout << julianoParaData(dj + 60) << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
