// C05EX20.CPP

#include <iostream>

using namespace std;

int16_t VALOR = 3;

namespace escopo1
{
  int16_t VALOR = 2;
  namespace escopo2
  {
    int16_t VALOR = 1;
  }
}

int main(void)
{

  int16_t VALOR = 4;

  cout << VALOR << endl;
  cout << ::VALOR << endl;
  cout << escopo1::VALOR << endl;
  cout << escopo1::escopo2::VALOR << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
