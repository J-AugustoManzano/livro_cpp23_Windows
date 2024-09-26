// C02EX14.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int16_t x, y;

  x = 10; y = ++x;
  cout << "\nX = " << x << " | Y = " << y << endl;

  x = 10; y = x++;
  cout << "\nX = " << x << " | Y = " << y << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
