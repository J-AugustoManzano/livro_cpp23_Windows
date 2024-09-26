// APBEX05.CPP

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool ehPalindromo(const string &frase) 
{
  string fraseLimpa, fraseReversa;

  for (char c : frase)
    if (isalnum(c))
      fraseLimpa += tolower(c);

  fraseReversa = fraseLimpa;
  reverse(fraseReversa.begin(), fraseReversa.end());

  return fraseLimpa == fraseReversa;
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
