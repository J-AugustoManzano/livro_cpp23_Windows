// C05EX15.CPP

#include <iostream>

using namespace std;

extern int16_t a;
extern int16_t b;

extern void adicao(void);

int main(void)
{

  cout << "Entre o 1o. numero: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Entre o 2o. numero: ";
  cin >> b;
  cin.ignore(80, '\n');

  adicao();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
