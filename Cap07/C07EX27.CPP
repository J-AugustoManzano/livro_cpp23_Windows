// C07EX27.CPP

#include <iostream>

using namespace std;

#define produto1(x, y) ((x) * (y))
#define produto2(x, y) (x * y)

int main(void)
{
  cout << "(2 + 3) x 4 = " << produto1(2 + 3, 4) << endl;
  cout << "(2 + 3) x 4 = " << produto2(2 + 3, 4) << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
