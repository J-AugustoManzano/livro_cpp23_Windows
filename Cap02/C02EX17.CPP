// C02EX17.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  int16_t valor = 10;

  println("Valor decimal .................: {}", valor);
  println("Valor binario .................: {:b}", valor);
  println("Valor octal ...................: {:o}", valor);
  println("Valor hexadecimal (minusculo) .: {:x}", valor);
  println("Valor hexadecimal (maiusculo) .: {:X}", valor);

  println("");
  print("Tecle <Enter> para encerrar... ");
  cin.get();
  return 0;
}
