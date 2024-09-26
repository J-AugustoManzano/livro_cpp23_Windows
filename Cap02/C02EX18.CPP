// C02EX18.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  double valor = 3.14159;

  println("Valor com 2 casas decimais ..: {:.2f}", valor);
  println("Valor em notacao científica .: {:e}", valor);

  println("");
  print("Tecle <Enter> para encerrar... ");
  cin.get();
  return 0;
}
