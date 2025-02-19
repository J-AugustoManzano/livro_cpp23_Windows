// C02EX05.CPP

#include <iostream>
#include <locale>    // para setlocale()
#include <windows.h> // para SetConsoleCP()
#include <string>    // para usar std::wstring

using namespace std;

int main(void)
{
  wstring nome;

  setlocale(LC_ALL, "Portuguese_Brazil.1252");
  SetConsoleCP(1252);

  wcout << L"Olá.\nQual sua graça? ";
  getline(wcin, nome);

  cout << endl;
  wcout << L"Oi " << nome << L", vamos estudar." << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
