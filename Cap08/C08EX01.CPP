// C08EX01.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Aluno
{
  public:
    string nome;
    vector<float> nota;
    float media;

    Aluno() : nota(4) {} 
    float PoeMedia(void);
};

float Aluno::PoeMedia(void)
{
  float soma = 0.0f;
  for (float n : nota)
    soma += n;
  media = soma / nota.size();
  return media;
}

int main(void)
{
  cout << setprecision(2) << fixed;

  char entranota[6];
  Aluno aluno;

  cout << "Cadastro de aluno" << endl;
  cout << endl;

  cout << "Informe o nome.....: ";
  getline(cin, aluno.nome);
  cout << endl;

  cout << "Informe as notas:" << endl;
  cout << endl;
  for (size_t i = 0; i < aluno.nota.size(); ++i)
  {
    cout << setw(2) << i + 1 << "a. nota..........: ";
    cin.getline(entranota, sizeof(entranota));
    aluno.nota[i] = atof(entranota);
  }
  cout << endl;

  aluno.PoeMedia();

  cout << endl;
  cout << "Relatorio" << endl;
  cout << endl;
  cout << "Nome..........: " << aluno.nome << endl;
  cout << endl;
  for (size_t i = 0; i < aluno.nota.size(); ++i)
  {
    cout << setw(2) << i + 1 << "a. nota.....: ";
    cout << setw(5) << aluno.nota[i] << endl;
  }
  cout << endl;

  cout << "Media.........: " << setw(5) << aluno.media;
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
