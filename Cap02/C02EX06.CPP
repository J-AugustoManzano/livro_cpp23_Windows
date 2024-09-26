// C02EX06.CPP

#include <iostream>
#include <cwchar>

using namespace std;

int main(void)
{

  setlocale(LC_ALL, ".1252");

  wchar_t caractere1 = L'\u00AE';
  wchar_t caractere2 = L'\U000000AE';
  wchar_t caractere3 = L'\xAE';
  wchar_t frase[19] = L"Marca registrada \u00AE";

  wcout << L"Caractere 1 ..: " << caractere1 << endl;
  wcout << L"Caractere 2 ..: " << caractere2 << endl;
  wcout << L"Caractere 3 ..: " << caractere3 << endl;
  wcout << L"Texto ........: " << frase << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
