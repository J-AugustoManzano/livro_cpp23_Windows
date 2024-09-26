// C07EX18.CPP

#include <iostream>
#include <string>

using namespace std;

struct PessoaFisica {
  char cpf[15];
};

struct PessoaJuridica {
  char cnpj[20];
};

union Pessoa {
  PessoaFisica pf;
  PessoaJuridica pj;
};

struct CadCliente {
  string nome;
  char tipo;
  Pessoa pes;
};

int main(void)
{
  CadCliente cliente;

  cout << "Informe o nome ........: ";
  getline(cin, cliente.nome);
  cout << endl;

  cout << "Informe o tipo" << endl;
  cout << endl;
  cout << "Pessoa Fisica   (F/f)" << endl;
  cout << "Pessoa Juridica (J/j)" << endl;
  cout << endl;

  cout << "Qual tipo de pessoa ...: ";
  cin >> cliente.tipo;
  cin.ignore();

  if (toupper(cliente.tipo) == 'F')
  {
    cout << "Informe o CPF ......: ";
    cin.getline(cliente.pes.pf.cpf, 
      sizeof(cliente.pes.pf.cpf));
  }
  else if (toupper(cliente.tipo) == 'J')
  {
    cout << "Informe o CNPJ .....: ";
    cin.getline(cliente.pes.pj.cnpj, 
      sizeof(cliente.pes.pj.cnpj));
  }
  else
  {
    cout << "Tipo invalido!" << endl;
    return 1;
  }

  cout << endl;
  cout << "Saida de Dados" << endl;
  cout << endl;

  cout << cliente.nome << endl;
  if (toupper(cliente.tipo) == 'F')
    cout << cliente.pes.pf.cpf << endl;
  else if (toupper(cliente.tipo) == 'J')
    cout << cliente.pes.pj.cnpj << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
