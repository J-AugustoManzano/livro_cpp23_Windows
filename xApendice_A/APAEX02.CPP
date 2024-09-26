// APAEX02.CPP

#include <iostream>
#include <iomanip>
#include "calendar.h"

using namespace std;

int main(void)
{

  uint16_t dia, mes, ano;
  string data;
  string diaSemanaPt, diaSemanaEs;
  string diaSemanaEn, diaSemanaAl;
  uint64_t dj;

  do
    {
      cout << "Informe data no formato DD/MM/AAAA: ";
      getline(cin, data);
    }
  while (not dataValidaFormato(data) or
         not validaData(data));

  dia = pegaDia(data);
  mes = pegaMes(data);
  ano = pegaAno(data);

  diaSemanaPt = diaDaSemanaPorExtenso(data, "pt");
  diaSemanaEs = diaDaSemanaPorExtenso(data, "es");
  diaSemanaEn = diaDaSemanaPorExtenso(data, "en");
  diaSemanaAl = diaDaSemanaPorExtenso(data, "al");

  dj = dataParaJuliano(data);

  cout.fill('0');
  cout << endl;
  cout << "Data informada ..............: ";
  cout << data << endl;
  cout << "Dia .........................: ";
  cout << setw(2) << dia << endl;
  cout << "Mes .........................: ";
  cout << setw(2) << mes << endl;
  cout << "Ano .........................: ";
  cout << setw(4) << ano << endl;
  cout << "Dia da Semana................: ";
  cout << diaDaSemana(data) << endl;
  cout << "Ano Bissexto ................: ";
  cout << (anoBissexto(data) ? "Sim" : "Nao") << endl;
  cout << "Ultimo Dia no Mes ...........: ";
  cout << ultimoDiaNoMes(data) << endl;
  cout << "Data para Dia Juliano .......: ";
  cout << dataParaJuliano(data) << endl;
  cout << "Calendario ..................: ";
  if (dataANSI(data) <= 15821004)
    cout << "Juliano" << endl;
  if (dataANSI(data) >= 15821015)
    cout << "Gregoriano" << endl;
  cout << "Dia Juliano para Data .......: ";
  cout << julianoParaData(dj) << endl;
  cout << "Dia da semana em Portugues ..: ";
  cout << diaSemanaPt << endl;
  cout << "Dia da semana em Espanhol ...: ";
  cout << diaSemanaEs << endl;
  cout << "Dia da semana em Ingles .....: ";
  cout << diaSemanaEn << endl;
  cout << "Dia da semana em Alemao .....: ";
  cout << diaSemanaAl << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
