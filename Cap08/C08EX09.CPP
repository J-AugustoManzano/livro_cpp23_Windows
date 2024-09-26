// C08EX09.CPP

#include <iostream>

using namespace std;

class Funcionario
{
  protected:
    string nome;
    double salario;

  public:
    Funcionario(const string &nome, double salario)
      : nome(nome), salario(salario) {}

    virtual void calcularSalario(void)
    {
      cout << "Salario de " << nome;
      cout << ": R$ " << salario << endl;
    }

    virtual ~Funcionario() {}
};

class Gerente : public Funcionario
{
  private:
    double bonus;

  public:
    Gerente(const string &nome, double salario, double bonus)
      : Funcionario(nome, salario), bonus(bonus) {}

    void calcularSalario(void) override
    {
      double salarioTotal = salario + bonus;
      cout << "Salario de " << nome;
      cout << " (Gerente): R$ " << salarioTotal << endl;
    }
};

int main(void)
{
  // Criando objetos diretos
  Funcionario func1("Alice", 4000.0);
  Gerente func2("Bob", 6000.0, 2000.0);

  // Usando referências para manter o polimorfismo
  Funcionario &ref1 = func1;
  Funcionario &ref2 = func2;

  ref1.calcularSalario(); // Chama versão da classe base.
  ref2.calcularSalario(); // Chama versão da classe derivada.

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
