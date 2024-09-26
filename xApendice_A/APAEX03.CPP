// APAEX03.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "calendar.h"

using namespace std;

int main(void)
{

  bool atraso {false};
  uint16_t diasAtraso {0};
  double valorTitulo, valorFinal {0.0};
  double valorDesc {0.0};
  double valorJuros {0.0};
  double valorMora {0.0};
  uint64_t djVencimento, djAtual;
  string dataAtualSis, dataVencimento;
  string diaSis, mesSis, anoSis;
  string flexNum;
  time_t agora = time(0);
  tm *dataHora = localtime(&agora);
  ostringstream dataStream;

  diaSis = to_string(dataHora->tm_mday);
  mesSis = to_string(dataHora->tm_mon + 1);
  anoSis = to_string(dataHora->tm_year + 1900);

  dataStream << setfill('0') << setw(2) << diaSis << "/";
  dataStream << setfill('0') << setw(2) << mesSis << "/";
  dataStream << setfill('0') << setw(4) << anoSis;

  dataAtualSis = dataStream.str();

  cout << setprecision(2) << fixed << right;

  cout << "XPTO Comercial Ltda." << endl;
  cout << "Data: " << dataAtualSis << endl;
  cout << "--------------------" << endl;
  cout << endl;
  cout << "Sistema CAIXA" << endl;
  cout << endl;

  do
    {
      cout << "Entre data vencimento - DD/MM/AAAA .: ";
      getline(cin, dataVencimento);
    }
  while (not dataValidaFormato(dataVencimento) or
         not validaData(dataVencimento));

  cout << "Entre valor do titulo R$ ...........: ";
  cin >> valorTitulo;
  cin.ignore(80, '\n');

  djVencimento = dataParaJuliano(dataVencimento);
  djAtual = dataParaJuliano(dataAtualSis);
  diasAtraso = djAtual - djVencimento;

  if (djAtual < djVencimento)
    {
      valorDesc = 0.035 * valorTitulo;
      valorFinal = valorTitulo - valorDesc;
    }
  else if (djAtual == djVencimento)
    valorFinal = valorTitulo;
  else
    {
      valorJuros = (0.10 * valorTitulo);
      valorMora = (0.005 * valorTitulo * diasAtraso);
      valorFinal = valorTitulo + valorJuros + valorMora;
    }

  cout << endl;
  if (diasAtraso < 0)
    {
      cout << "Titulo pago antes da data de vencimento";
      cout << endl;
    }
  else if (diasAtraso == 0)
    cout << "Titulo pago no vencimento" << endl;
  else
    {
      flexNum = (diasAtraso == 1) ? " dia" : " dias";
      cout << "Titulo pago com " << diasAtraso;
      cout << flexNum << " de atraso" << endl;
    }

  cout << endl;
  cout << "Valor titulo .... R$ " << setw(10);
  cout << valorTitulo << endl;
  cout << "Valor juros ..... R$ " << setw(10);
  cout << valorJuros << endl;
  cout << "Valor mora ...... R$ " << setw(10);
  cout << valorMora << endl;
  cout << "Valor desconto .. R$ " << setw(10);
  cout << valorDesc << endl;
  cout << "Valor total ..... R$ " << setw(10);
  cout << valorFinal << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
