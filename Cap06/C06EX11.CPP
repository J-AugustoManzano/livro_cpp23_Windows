// C06EX11.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t a = 10;
  int32_t b = 20;

  int32_t *pa = nullptr, *pb = nullptr;

  pa = &a;
  pb = &b;

  cout << "Valor de PA = " << *pa << " no endereco = ";
  cout << &pa << endl;

  cout << "Valor de PB = " << *pb << " no endereco = ";
  cout << &pb << endl;

  *pa = *pb;

  cout << "Valor de PA = " << *pa << " no endereco = ";
  cout << &pa << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
