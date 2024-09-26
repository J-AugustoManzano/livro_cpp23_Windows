// APCEX01.CPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int segundosDia(const string &hora)
{
  int h = stoi(hora.substr(0, 2));
  int m = stoi(hora.substr(3, 2));
  int s = stoi(hora.substr(6, 2));
  return h * 3600 + m * 60 + s;
}

void relogio(int segundos)
{
  int h = segundos / 3600;
  int m = (segundos % 3600) / 60;
  int s = segundos % 60;
  cout << setfill('0');
  cout << setw(2) << h << ":";
  cout << setw(2) << m << ":";
  cout << setw(2) << s;
  cout << setfill(' ');
}

bool formatoHora(const string &hora)
{
  if (hora.length() != 8)
    return false;
  if (hora[2] != ':' or hora[5] != ':')
    return false;
  for (int i = 0; i <= 7; ++i) {
    if (i == 2 or i == 5)
      continue;
    if (not isdigit(hora[i]))
      return false;
  }
  return true;
}

bool entradaValida(const string &hora)
{
  int h = stoi(hora.substr(0, 2));
  int m = stoi(hora.substr(3, 2));
  int s = stoi(hora.substr(6, 2));
  return (h >= 8 and h <= 22) and
         ((h != 22) or (m == 0 and s == 0)) and
         (m >= 0 and m <= 59) and
         (s >= 0 and s <= 59);
}

bool saidaValida(const string &hora)
{
  int h = stoi(hora.substr(0, 2));
  int m = stoi(hora.substr(3, 2));
  int s = stoi(hora.substr(6, 2));
  return (h >=  8 and h < 23) or
         (h == 23 and m == 0 and s == 0);
}

float calcularCobranca(int segundos) {
  const int  SEGS_PRIMA_HORA = 3600;
  const float VLR_PRIMA_HORA = 5.00;
  const float VLR_HORA_ADICL = 1.50;
  if (segundos <= SEGS_PRIMA_HORA)
    return VLR_PRIMA_HORA;
  else
    return VLR_PRIMA_HORA + ceil((segundos - SEGS_PRIMA_HORA)
           / 3600.0) * VLR_HORA_ADICL;
}

int main(void)
{
  string entrada, saida;
  int segEnt, segSai, difSegs;

  cout << fixed << setprecision(2);
  cout << "Estacionamento XPTO-Park" << endl;
  cout << "------------------------" << endl;
  cout << endl;

  do {
    cout << "Informe hora de entrada (HH:MM:SS) .: ";
    cin >> entrada;
    cin.ignore(80, '\n');
  } while (not formatoHora(entrada) or 
           not entradaValida(entrada));

  do {
    do {
      cout << "Informe hora de saida   (HH:MM:SS) .: ";
      cin >> saida;
      cin.ignore(80, '\n');
    } while (not formatoHora(saida) or 
             not saidaValida(saida));

    segEnt = segundosDia(entrada);
    segSai = segundosDia(saida);

    if (segSai <= segEnt) {
      cout << "Hora (saida) deve ser maior ";
      cout << "que hora (entrada)" << endl;
    }
  } while (segSai <= segEnt);

  difSegs = segSai - segEnt;

  cout << "Permanencia ........................: ";
  relogio(difSegs);
  cout << endl;

  cout << "Valor cobrado ......................: R$ ";
  cout << setw(5) << calcularCobranca(difSegs) << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
