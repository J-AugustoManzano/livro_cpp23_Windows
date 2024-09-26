// BIBLIO_ECRA.CPP
// Arquivo com codigo das funcoes da biblioteca ECRA.h

#include <iostream>
#include <windows.h>

// Limpar tela
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

// Posicionar cursor
void position(int linha, int coluna)
{
  HANDLE tela;
  CONSOLE_SCREEN_BUFFER_INFO info;
  COORD pos;
  tela = GetStdHandle(STD_OUTPUT_HANDLE);
  if (GetConsoleScreenBufferInfo(tela, &info))
    {
      pos.X = coluna - 1;
      pos.Y = linha - 1;
      if (pos.X >= 0 and pos.X < info.dwSize.X and
          pos.Y >= 0 and pos.Y < info.dwSize.Y)
        SetConsoleCursorPosition(tela, pos);
    }
}

// Limpar linha
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
