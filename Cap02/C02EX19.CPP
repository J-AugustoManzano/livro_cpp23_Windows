// C02EX19.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Numeros: {}, {} e {}", 1, 3, 2);
  println("Numeros: {0}, {2} e {1}", 1, 3, 2);

  println("");
  print("Tecle <Enter> para encerrar... ");
  cin.get();
  return 0;
}
