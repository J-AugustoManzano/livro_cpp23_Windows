// C06EX04.CPP

#include <iostream>

using namespace std;

int main(void)
{

  char    c, *pc;
  int32_t i, *pi;
  int16_t s, *ps;
  float   f, *pf;
  double  d, *pd;
  int64_t l, *pl;
  bool    b, *pb;

  cout << "Tamanho 'char' ..........: " << sizeof(c);
  cout << " byte.\n";
  cout << "Tamanho 'int' ...........: " << sizeof(i);
  cout << " bytes.\n";
  cout << "Tamanho 'short' .........: " << sizeof(s);
  cout << " bytes.\n";
  cout << "Tamanho 'float' .........: " << sizeof(f);
  cout << " bytes.\n";
  cout << "Tamanho 'double' ........: " << sizeof(d);
  cout << " bytes.\n";
  cout << "Tamanho 'long double' ...: " << sizeof(l);
  cout << " bytes.\n";
  cout << "Tamanho 'bool' ..........: " << sizeof(b);
  cout << " byte.\n";
  cout << endl;

  cout << "Tamanho 'p char' ........: " << sizeof(pc);
  cout << " bytes.\n";
  cout << "Tamanho 'p int' .........: " << sizeof(pi);
  cout << " bytes.\n";
  cout << "Tamanho 'p short' .......: " << sizeof(ps);
  cout << " bytes.\n";
  cout << "Tamanho 'p float' .......: " << sizeof(pf);
  cout << " bytes.\n";
  cout << "Tamanho 'p double' ......: " << sizeof(pd);
  cout << " bytes.\n";
  cout << "Tamanho 'p long double' .: " << sizeof(pl);
  cout << " bytes.\n";
  cout << "Tamanho 'p bool' ........: " << sizeof(pb);
  cout << " bytes.\n";

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
