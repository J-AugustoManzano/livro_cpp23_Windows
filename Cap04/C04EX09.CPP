// C04EX09.CPP

#include <iostream>

using namespace std;

int main(void)
{
  float n;

  while (true)
  {
    cout << "Entre um valor numerico: ";
    if (cin >> n)
      break;
    else
    {
      cout << "Erro: entre apenas valor numerico" << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }
  }

  cin.ignore(80, '\n');

  cout << "Resultado = " << n + 5 << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
