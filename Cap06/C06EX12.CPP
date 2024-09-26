// C06EX12.CPP

#include <iostream>

using namespace std;

int main (void)
{

  int32_t a = 1;
  int32_t b = 1;

  int32_t *pa = nullptr;
  int32_t *pb = nullptr;

  pa = &a;
  pb = &b;

  cout << "Valor A = " << *pa << " no endereco " << &pa;
  cout << "." << endl;
  cout << "Valor B = " << *pb << " no endereco " << &pb;
  cout << "." << endl;
  cout << endl;

  if (pa > pb)
    cout << "PA esta a frente de *PB.";
  else
    cout << "PA nao esta a frente de *PB.";
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
