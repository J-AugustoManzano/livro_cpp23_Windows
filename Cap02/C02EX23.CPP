// C02EX23.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Combinado .: {:*<+10.2f}, {:+#09X}", 3.14159, 10);
  println("Valores ...: {}, {}", 10'000., 100'000.);

  println("");
  print("Tecle <Enter> para encerrar... ");
  cin.get();
  return 0;
}
