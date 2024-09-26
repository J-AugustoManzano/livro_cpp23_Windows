// C04EX06.CPP

#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
  uint16_t n, fat;
  char resp {'S'};
  
  while (toupper(resp) == 'S')
  {
    cout << "Programa Fatorial" << endl << endl;
    
    cout << "Fatorial de que valor: "; 
    cin >> n;
    cin.ignore(80, '\n');
    
    fat = 1;
    for (uint16_t i = 1; i <= n; ++i)
      fat *= i;
    
    cout << endl;
    cout << "Fatorial de " << n << " = " << fat << endl;
    
    cout << endl << "Deseja continuar?" << endl;
    cout << "Tecle [S] p/ SIM | outra letra p/ NAO: ";
    cin.get(resp); 
    cin.ignore();
    cout << endl;
  }
  
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
