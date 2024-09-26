// C02EX21.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Zeros a esquerda ..: {:08}, {:08}", 10, -.2);
  println("Espacos em branco .: {:8d}", 10);
  println("Sem espacos .......: {:d}", 10);

  println("");
  print("Tecle <Enter> para encerrar... ");
  cin.get();
  return 0;
}
