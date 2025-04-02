// MEUSPC.H (suporte para C05EX21)
// Arquivo de cabecalho para namespace

#include <iostream>

using namespace std;

#ifndef __MEUSPC_H
#define __MEUSPC_H

namespace testespc
{
   void subTeste(void)
   {
      cout << "Teste no meuspc." << endl;
      cout << endl;
      cout << "Tecle <Enter> para encerrar... ";
      cin.get();
   }
}

#endif // __MEUSPC_H
