// C06EX14.CPP

#include <iostream>

using namespace std;

int32_t soma(int32_t a, int32_t b)
{
  return a + b;
}

int32_t subtracao(int32_t a, int32_t b)
{
  return a - b;
}

int main(void)
{

  int32_t (*funcaoPont)(int32_t, int32_t);
  int32_t resultado;

  funcaoPont = soma; // ou funcaoPont = &soma;
  resultado = funcaoPont(5, 2);
  cout << "Resultado soma .......: " << resultado << endl;

  funcaoPont = subtracao; // ou funcaoPont = &subtracao;
  resultado = funcaoPont(5, 2);
  cout << "Resultado subtracao ..: " << resultado << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
