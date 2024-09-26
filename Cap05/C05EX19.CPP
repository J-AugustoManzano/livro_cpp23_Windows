// C05EX19.CPP

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

  {
    using namespace soma;
    resultado = 5 + 3;
    std::cout << resultado << std::endl;
  }

  {
    using namespace quociente;
    resultado = 5.0 / 3.0;
    std::cout << resultado << std::endl;
  }

  {
    using namespace produto;
    resultado = 5 * 3;
    std::cout << resultado << std::endl;
  }

  {
    using namespace diferenca;
    resultado = 5 - 3;
    std::cout << resultado << std::endl;
  }

  std::cout << std::endl;
  std::cout << "Tecle <Enter> para encerrar... ";
  std::cin.get();
  return 0;
}
