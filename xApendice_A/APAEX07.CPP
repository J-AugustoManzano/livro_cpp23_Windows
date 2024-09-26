// APAEX07.CPP

#include <iostream>
#include <iomanip>
#include "calendar.h"

using namespace std;

uint16_t indiceSemana(uint16_t dia, uint16_t mes, 
                      uint16_t ano)
{
  uint16_t indice, k, j;

  if (mes < 3)
  {
    mes += 12;
    ano--;
  }
  k = ano % 100;
  j = ano / 100;
  indice = ((dia + 13 * (mes + 1) / 5 + k + k / 4 +
             j / 4 - 2 * j) % 7) + 1;
  return (indice + 5) % 7;
}

void mostrarCalendario(uint16_t ano)
{
  string nomeMes;
  uint16_t diasNoMes, diaSemana;

  if (ano >= 1583 and ano <= 9999)
    {
      cout << "Calendario de " << ano << ":" << endl;
      cout << endl;

      for (uint16_t mes = 1; mes <= 12; ++mes)
        {
          cout << "---------------------------" << endl;
          switch (mes)
            {
              case  1: nomeMes = "Janeiro";      break;
              case  2: nomeMes = "Fevereiro";    break;
              case  3: nomeMes = "Marco";        break;
              case  4: nomeMes = "Abril";        break;
              case  5: nomeMes = "Maio";         break;
              case  6: nomeMes = "Junho";        break;
              case  7: nomeMes = "Julho";        break;
              case  8: nomeMes = "Agosto";       break;
              case  9: nomeMes = "Setembro";     break;
              case 10: nomeMes = "Outubro";      break;
              case 11: nomeMes = "Novembro";     break;
              case 12: nomeMes = "Dezembro";     break;
              default: nomeMes = "Mes invalido"; break;
            }
          cout << nomeMes << endl;
          cout << "---------------------------" << endl;
          cout << "Dom Seg Ter Qua Qui Sex Sab" << endl;

          diasNoMes = ultimoDiaNoMes("01/" + to_string(mes) +
                                     "/" + to_string(ano));
          diaSemana = indiceSemana(1, mes, ano);

          // Preencher os espacos vazios no inicio do mes
          for (uint16_t i = 0; i < diaSemana; ++i)
            cout << "    ";

          for (uint16_t dia = 1; dia <= diasNoMes; ++dia)
            {
              cout << setw(3) << dia << " ";

              ++diaSemana;
              if (diaSemana > 6)
                {
                  diaSemana = 0;
                  cout << endl;
                }
            }

           cout << endl << endl;
        }
    }
  else
    cout << "Ano invalido!" << endl;

}

int main(void)
{
  uint16_t ano;

  cout << "Entre ano entre 1583 e 9999: ";
  cin >> ano;
  cin.ignore(80, '\n');
  cout << endl;

  mostrarCalendario(ano);

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
