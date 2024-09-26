// C06EX10.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t a = 1;
  float b = 2.5;

  void *pg = nullptr;

  pg = &a;
  cout << "Valor inteiro ...: " << *(int32_t*)pg << endl;

  pg = &b;
  cout << "Valor real ......: " << *(float*)pg << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
