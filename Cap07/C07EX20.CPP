// C07EX20.CPP

#include <iostream>

using namespace std;

int main(void) 
{
  enum class Meses {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
  };

  Meses mes;

  cout << "Teste de acesso, lista enumerada" << endl;
  cout << endl;

  mes = Meses::JANEIRO;

  cout << "Mes definido = " << static_cast<int>(mes);
  cout << " em extenso equivale a ";

  switch (mes) {
    case Meses::JANEIRO:   cout << "janeiro";   break;
    case Meses::FEVEREIRO: cout << "fevereiro"; break;
    case Meses::MARCO:     cout << "marco";     break;
    case Meses::ABRIL:     cout << "abril";     break;
    case Meses::MAIO:      cout << "maio";      break;
    case Meses::JUNHO:     cout << "junho";     break;
    case Meses::JULHO:     cout << "julho";     break;
    case Meses::AGOSTO:    cout << "agosto";    break;
    case Meses::SETEMBRO:  cout << "setembro";  break;
    case Meses::OUTUBRO:   cout << "outubro";   break;
    case Meses::NOVEMBRO:  cout << "novembro";  break;
    case Meses::DEZEMBRO:  cout << "dezembro";  break;
    default:               cout << "Mes invalido"; break;
  }

  cout << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();

  return 0;
}
