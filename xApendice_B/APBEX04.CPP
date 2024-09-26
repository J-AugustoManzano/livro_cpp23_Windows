// APBEX04.CPP

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool ehPalindromo(const string &frase) 
{
  string fraseLimpa;
  int inicio, fim;
  
  for (char c : frase)
    if (isalnum(c))
      fraseLimpa += tolower(c);
  
  inicio = 0;
  fim = fraseLimpa.length() - 1;

  while (inicio < fim) {
    if (fraseLimpa[inicio] != fraseLimpa[fim])
      return false;
    inicio++;
    fim--;
  }
  
  return true;
}

int main(void) 
{
  string frase;
  
  cout << "Entre uma frase: ";
  getline(cin, frase);
  
  if (ehPalindromo(frase))
    cout << "A frase e um palindromo." << endl;
  else
    cout << "A frase nao e um palindromo." << endl;
  
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
