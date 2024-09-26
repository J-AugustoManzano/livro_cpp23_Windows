// C07EX24.CPP

#include <iostream>
#include <string>

using namespace std;

using ProdutoID = int32_t;
using NomeProduto = string;
using PrecoProduto = float;

struct Produto
{
  ProdutoID id;
  NomeProduto nome;
  PrecoProduto preco;
};

int main(void)
{

  Produto p1;
  p1.id = 101;
  p1.nome = "Camiseta";
  p1.preco = 29.99;

  cout << "Informacoes do Produto:\n" << endl;
  cout << "ID .......: " << p1.id << endl;
  cout << "Nome .....: " << p1.nome << endl;
  cout << "Preco $ ..: " << p1.preco << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

