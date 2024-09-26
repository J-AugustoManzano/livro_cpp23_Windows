// C05EX18.CPP

#include <iostream>

namespace soma
{
  int16_t resultado;
}

namespace quociente
{
  float resultado;
}

namespace produto
{
  int64_t resultado;
}

namespace diferenca
{
  double resultado;
}

int main(void)
{

  using namespace produto;

  resultado = 5 + 3;
  std::cout << resultado << std::endl;

  resultado = 5 / 3;
  std::cout << resultado << std::endl;

  resultado = 5 * 3;
  std::cout << resultado << std::endl;

  resultado = 5 - 3;
  std::cout << resultado << std::endl;

  std::cout << std::endl;
  std::cout << "tecle <enter> para encerrar... ";
  std::cin.get();
  return 0;
}
