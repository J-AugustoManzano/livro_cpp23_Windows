// C06EX06.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int a = 1;
  int *pa = nullptr;

  pa = &a;

  cout << "Endereco atual ...............: " << pa << endl;

  pa++;
  cout << "Proximo endereco a frente ....: " << pa << endl;

  pa++;
  cout << "Proximo endereco a frente ....: " << pa << endl;

  pa--;
  cout << "Endereco anterior para tras ..: " << pa << endl;

  pa--;
  cout << "Endereco anterior para tras ..: " << pa << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
