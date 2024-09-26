// C07EX15.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct CadastroAluno {
  string nome;
  array<float, 4> notas;
  float media;
};

int main(void)
{
  vector<CadastroAluno> alunos(8);
  CadastroAluno x;
  float soma_nt, soma_md, media_gp;

  cout << setprecision(2) << fixed;

  cout << "Cadastro de alunos" << endl << endl;

  for (int i = 0; i <= 7; ++i) {
    cout << "Entre " << setw(2) << i + 1 << "o. nome: ";
    getline(cin, alunos[i].nome);
    cout << endl;
    cout << "Entre as notas:" << endl << endl;
    for (int j = 0; j <= 3; ++j) {
      cout << setw(2) << j + 1 << "a. nota: ";
      string entranota;
      getline(cin, entranota);
      alunos[i].notas[j] = atof(entranota.c_str());
    }
    cout << endl;
  }

  soma_md = 0;
  for (size_t i = 0; i <= 7; ++i) {
    soma_nt = 0;
    for (size_t j = 0; j <= 3; ++j)
      soma_nt += alunos[i].notas[j];
    alunos[i].media = soma_nt / 4;
    soma_md += alunos[i].media;
  }
  media_gp = soma_md / 8;

  for (size_t i = 0; i <= 6; ++i)
    for (size_t j = i + 1; j <= 7; ++j)
      if (alunos[i].nome > alunos[j].nome) {
        x = alunos[i];
        alunos[i] = alunos[j];
        alunos[j] = x;
      }

  cout << endl << "Relatorio Geral" << endl << endl;
  cout << left << setw(41) << "Aluno";
  cout << right << setw(7) << "Nota1";
  cout << setw(7) << "Nota2";
  cout << setw(7) << "Nota3";
  cout << setw(7) << "Nota4";
  cout << setw(7) << "Media" << endl << endl;

  for (size_t i = 0; i <= 7; ++i) {
    cout << left << setw(41) << alunos[i].nome;
    cout << right;
    for (size_t j = 0; j <= 3; ++j)
      cout << setw(7) << alunos[i].notas[j];
    cout << setw(7) << alunos[i].media << endl;
  }

  cout << endl;
  cout << setw(70) << "Media Geral = ";
  cout << setw(6) << media_gp << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
