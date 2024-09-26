// APBEX03.CPP

#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
  string palavra;
  int tamanho;
    
  cout << "Entre uma palavra: ";
  cin >> palavra;
  cin.ignore(80, '\n');
    
  tamanho = palavra.length();
    
  for (int i = 0; i < tamanho; ++i) {
    for (int j = 0; j < tamanho - i - 1; ++j)
      cout << " ";
    cout << palavra.substr(tamanho - i - 1) << endl;
  }
    
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
