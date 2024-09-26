// C03EX13.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int32_t mes;

  cout << "Entre numero equivalente a um mes: ";
  cin >> mes;
  cin.ignore(80, '\n');

  cout << endl;

  switch (mes)
    {
      case  1: cout << "Janeiro";      break;
      case  2: cout << "Fevereiro";    break;
      case  3: cout << "Marco";        break;
      case  4: cout << "Abril";        break;
      case  5: cout << "Maio";         break;
      case  6: cout << "Junho";        break;
      case  7: cout << "Julho";        break;
      case  8: cout << "Agosto";       break;
      case  9: cout << "Setembro";     break;
      case 10: cout << "Outubro";      break;
      case 11: cout << "Novembro";     break;
      case 12: cout << "Dezembro";     break;
      default: cout << "Mes invalido"; break;
    }

  cout << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
