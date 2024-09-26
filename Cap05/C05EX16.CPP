// C05EX16.CPP

#include <iostream>
#include <iomanip>

using namespace std;

void incremento(void)
{
  static int r = 1;
  cout << setw(2) << r << endl;
  ++r;
}

int main(void)
{

  for(int i = 1; i <= 10; i++)
    incremento();

  cout << "\nTecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
