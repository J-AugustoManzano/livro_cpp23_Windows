// C05EX09.CPP
// Definicao de cores

#include <iostream>
#include <windows.h>

using namespace std;

#define black     0 // Preto
#define blue      1 // Azul
#define green     2 // Verde
#define cyan      3 // Ciano
#define red       4 // Vermelho
#define magenta   5 // Magenta
#define brown     6 // Marrom
#define lgray     7 // Cinza claro
#define dgray     8 // Cinza escuro
#define lblue     9 // Azul claro
#define lgreen   10 // Verde claro
#define lcyan    11 // Ciano claro
#define lred     12 // Vermelho claro
#define lmagenta 13 // Magenta claro
#define yellow   14 // Amarelo
#define white    15 // Branco

void clear(void)
{
  HANDLE tela;
  CONSOLE_SCREEN_BUFFER_INFO info;
  DWORD escrita = 0;
  tela = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(tela, &info);
  COORD pos = {0, 0};
  DWORD celulas = info.dwSize.X * info.dwSize.Y;
  FillConsoleOutputCharacter(tela, ' ', celulas, pos,
    &escrita);
  SetConsoleCursorPosition(tela, pos);
}

void color(int corFundo, int corTexto)
{
  HANDLE tela;
  int16_t cor;
  tela = GetStdHandle(STD_OUTPUT_HANDLE);
  if (corFundo < 0 and corFundo > 15 and corTexto < 0 and
    corTexto > 15)
    cor = 15;
  else
    cor = corTexto + corFundo * 16;
  SetConsoleTextAttribute(tela, cor);
}

int main(void)
{

  clear();
  cout << "Padrao de Cores com Codigo Numerico";
  cout << endl << endl;

  color(1, 14);
  cout << "Fundo: Azul // Texto: Amarelo" << endl;
  cout << endl;

  color(1, 7);
  cout << "Fundo: Azul // Texto: Cinza claro" << endl;
  cout << endl;

  color(4, 14);
  cout << "Fundo: Vermelho // Texto: Amarelo" << endl;
  cout << endl;

  color(0, 2);
  cout << "Fundo: Preto // Texto: Verde" << endl;
  cout << endl;

  color(7, 12);
  cout << "Fundo: Cinza claro // Texto: Vermelho claro";
  cout << endl << endl;

  color(brown, white);
  cout << "Fundo: Marrom // Texto: Branco" << endl;
  cout << endl;

  color(0, 7);

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();

  return 0;
}
