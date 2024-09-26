// C02EX20.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Esquerda ......: {:*<8}", 10);
  println("Direita .......: {:*>8}", 10);
  println("Centralizado ..: {:*^8}", 10);

  println("");
  print("Tecle <Enter> para encerrar... ");
  cin.get();
  return 0;
}
