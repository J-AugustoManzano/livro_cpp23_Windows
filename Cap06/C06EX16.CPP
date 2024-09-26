// C06EX16.CPP

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

int32_t (*operacao(char operador))(int32_t, int32_t)
{
  if (operador == '+')
    return soma;
  if (operador == '-')
    return subtracao;
  return nullptr;
}

int main(void)
{

  char operador;
  int32_t a, b;

  cout << "Informe operador (+ ou -): ";
  cin >> operador;
  cin.ignore(80, '\n');

  int32_t (*funcao)(int32_t, int32_t) = operacao(operador);

  if (operador == '+' or operador == '-')
    {

      cout << "Informe 1o. numero: ";
      cin >> a;
      cin.ignore(80, '\n');

      cout << "Informe 2o. numero: ";
      cin >> b;
      cin.ignore(80, '\n');

      cout << "Resultado: " << funcao(a, b) << endl;

    }
  else
    {
       cout << endl;
       cerr << "Operador invalido." << endl;
    }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
