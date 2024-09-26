// APBEX02.CPP

#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
  string palavra;
  
  cout << "Entre uma palavra: ";
  cin >> palavra;
  cin.ignore(80, '\n');

  for (int i = 0; i <= palavra.length(); ++i)
    cout << palavra.substr(0, i) << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

