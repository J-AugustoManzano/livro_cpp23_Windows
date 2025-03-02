// C02EX22.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Positivo com sinal ....: {:+}", 10);
  println("Com espaco em branco ..: {: }", 10);

  println("");
  print("Tecle <Enter> para encerrar... ");
  cin.get();
  return 0;
}
