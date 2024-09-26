// C05EX10.CPP
// Programa Calculadora

#include <iostream>
#include <iomanip>
#include "ecra.h"

using namespace std;

float r, a, b;

void pausa(void)
{
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

void entrada(void)
{
  position( 5, 1);
  cout << "Entre um valor para a variavel [A]: ";
  cin >> a;
  cin.ignore(80, '\n');
  position( 6, 1);
  cout << "Entre um valor para a variavel [B]: ";
  cin >> b;
  cin.ignore(80, '\n');
}

float calculo(float a, float b, char operador)
{
  switch (operador)
  {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    default: return 0.0;
  }
}

void saida(void)
{
  position( 9, 1);
  cout << "O resultado entre A e B = " << setw(8) << r;
  cout << endl;
  position(11, 1);
  pausa();
}

void rotadicao(void)
{
  clear();
  position( 1, 1); cout << "Rotina de Adicao";
  position( 2, 1); cout << "----------------";
  entrada();
  r = calculo(a, b, '+');
  saida();
}

void rotsubtracao(void)
{
  clear();
  position( 1, 1); cout << "Rotina de Subtracao";
  position( 2, 1); cout << "-------------------";
  entrada();
  r = calculo(a, b, '-');
  saida();
}

void rotmultiplicacao(void)
{
  clear();
  position( 1, 1); cout << "Rotina de Multiplicacao";
  position( 2, 1); cout << "-----------------------";
  entrada();
  r = calculo(a, b, '*');
  saida();
}

void rotdivisao(void)
{
  clear();
  position( 1, 1); cout << "Rotina de Divisao";
  position( 2, 1); cout << "-----------------";
  entrada();
  if (b == 0)
    {
      position( 9, 1); cout << "Erro de divisao";
      position(11, 1); pausa();
    }
  else
    {
      r = calculo(a, b, '-');
      saida();
    }
}

int main(void)
{
  int16_t opcao = 0;
  while (opcao != 5)
    {
      cout << setprecision(2);
      cout << setiosflags(ios::right);
      cout << setiosflags(ios::fixed);
      clear();
      position( 1, 1); cout << "--------------------";
      position( 2, 1); cout << "Programa Calculadora";
      position( 3, 1); cout << "   Menu Principal   ";
      position( 4, 1); cout << "--------------------";
      position( 6, 1); cout << "[1] - Adicao";
      position( 7, 1); cout << "[2] - Subtracao";
      position( 8, 1); cout << "[3] - Multiplicacao";
      position( 9, 1); cout << "[4] - Divisao";
      position(10, 1); cout << "[5] - Fim de Programa";
      position(12, 1); cout << "Escolha uma opcao: ";
      cin >> opcao;
      cin.ignore(80, '\n');
      if (opcao != 5)
        {
          switch (opcao)
            {
              case  1: rotadicao();        break;
              case  2: rotsubtracao();     break;
              case  3: rotmultiplicacao(); break;
              case  4: rotdivisao();       break;
            }
        }
    }
  return 0;
}
