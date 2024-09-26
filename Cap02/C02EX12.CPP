// C02EX12.CPP

#include <iostream>

using namespace std;

int main(void)
{
  bool x = true;

  cout << boolalpha;

  cout << "Valor X como verdadeiro ...: " << x << endl;

  x = false;
  cout << "Valor X como falso ........: " << x << endl;

  cout << noboolalpha;

  x = true;
  cout << "Valor X como verdadeiro ...: " << x << endl;

  x = false;
  cout << "Valor X como falso ........: " << x << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
