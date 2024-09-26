// C05EX17.CPP

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

  soma::resultado = 5 + 3;
  std::cout << soma::resultado << std::endl;

  quociente::resultado = 5.0 / 3.0;
  std::cout << quociente::resultado << std::endl;

  produto::resultado = 5 * 3;
  std::cout << produto::resultado << std::endl;

  diferenca::resultado = 5 - 3;
  std::cout << diferenca::resultado << std::endl;

  std::cout << std::endl;
  std::cout << "Tecle <Enter> para encerrar... ";
  std::cin.get();
  return 0;
}
