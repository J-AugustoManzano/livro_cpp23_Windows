// C02EX15.CPP

/**
  O programa seguinte demonstra o uso de linhas de
  Comentários usadas em um codigo de programa escrito na
  linguagem de programacao C++. O programa apresenta a
  quantidade de bits de cada tipo de dado suportado em C++.
*/

#include <iostream> // para uso de "cin", "cout" e "endl"
#include <iomanip>  // para uso de setw()

using namespace std;

/**
  Funcao principal.
  @return 0 se o programa for bem-sucedido.
*/

int main(void)
{
  // Declaracao de variaveis para varios tipos de dados.
  int8_t        ipos08;
  uint8_t       ineg08;
  int16_t       ipos16;
  uint16_t      ineg16;
  int32_t       ipos32;
  uint32_t      ineg32;
  int64_t       ipos64;
  uint64_t      ineg64;
  char          cpos08;
  unsigned char cneg08;
  wchar_t       cwid16;
  float         fdec32;
  double        fdec64;
  long double   fdec99;
  bool          lboo08;

  // Configura a formatacao de saida.
  cout << "Tipos de dados e seus tamanhos em bits.\n";
  cout << endl;

  // Apresenta os tamanhos dos tipos de dados em bits.
  cout << "inteiro (+) ........: ";
  cout << setw(3) << sizeof(ipos08) * 8 << " bits\n";
  cout << "inteiro (-) ........: ";
  cout << setw(3) << sizeof(ineg08) * 8 << " bits\n";
  cout << "inteiro (+) ........: ";
  cout << setw(3) << sizeof(ipos16) * 8 << " bits\n";
  cout << "inteiro (-) ........: ";
  cout << setw(3) << sizeof(ipos16) * 8 << " bits\n";
  cout << "inteiro (+) ........: ";
  cout << setw(3) << sizeof(ipos32) * 8 << " bits\n";
  cout << "inteiro (-) ........: ";
  cout << setw(3) << sizeof(ipos32) * 8 << " bits\n";
  cout << "inteiro (+) ........: ";
  cout << setw(3) << sizeof(ipos64) * 8 << " bits\n";
  cout << "inteiro (-) ........: ";
  cout << setw(3) << sizeof(ipos64) * 8 << " bits\n";
  cout << "caractere (+) ......: ";
  cout << setw(3) << sizeof(cpos08) * 8 << " bits\n";
  cout << "caractere (-) ......: ";
  cout << setw(3) << sizeof(cneg08) * 8 << " bits\n";
  cout << "caractere largo ....: ";
  cout << setw(3) << sizeof(cwid16) * 8 << " bits\n";
  cout << "flutuante simples ..: ";
  cout << setw(3) << sizeof(fdec32) * 8 << " bits\n";
  cout << "flutuante duplo ....: ";
  cout << setw(3) << sizeof(fdec64) * 8 << " bits\n";
  cout << "flutuante longo ....: ";
  cout << setw(3) << sizeof(fdec99) * 8 << " bits\n";
  cout << "logico .............: ";
  cout << setw(3) << sizeof(lboo08) * 8 << " bits\n";
  cout << endl;

  // Aguarda a entrada do usuario para encerrar.
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
