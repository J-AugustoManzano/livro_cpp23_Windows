// C02EX16.CPP

#include <iostream>
#include <print>

int main(void)
{
  std::string nome = "Bjarne Stroustrup";
  uint16_t idade = 75;

  std::print("{} possui {} anos.\n", nome, idade);

  std::println("");
  std::print("Tecle <Enter> para encerrar... ");
  std::cin.get();
  return 0;
}
