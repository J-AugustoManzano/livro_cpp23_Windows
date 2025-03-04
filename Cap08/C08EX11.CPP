// C08EX11.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>

using namespace std;

class Aluno {
  private:
    string nome;
    vector<float> notas;
    float media;

  public:
    Aluno(int32_t numNotas) : notas(numNotas) {}

    void PoeNome(const string &nome) {
      this->nome = nome;
    }

    string PegaNome() const {
      return nome;
    }

    void PoeNota(float nota, int32_t pos) {
      if (pos >= 0 and static_cast<size_t>(pos) < 
        notas.size()) {
        notas[static_cast<size_t>(pos)] = nota;
      }
    }

    float PegaNota(int32_t pos) const {
      if (pos >= 0 and static_cast<size_t>(pos) < 
        notas.size()) {
        return notas[static_cast<size_t>(pos)];
      }
      return 0;
    }

    void PoeMedia() {
      float soma = 0;
      for (float nota : notas) {
        soma += nota;
      }
      media = soma / notas.size();
    }

    float PegaMedia() const {
      return media;
    }
};

int main(void) {
  int32_t numAlunos, numNotas = 4;
  float media_gp = 0;
  string nome;
  vector<Aluno> alunos;

  cout << setprecision(2) << fixed;

  cout << "Quantos alunos: ";
  cin >> numAlunos;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  alunos.reserve(static_cast<size_t>(numAlunos));

  for (int32_t i = 0; i < numAlunos; ++i) {
    cout << endl;
    cout << "Cadastro de aluno " << i + 1 << endl;
    cout << endl;
    cout << "Informe o nome.....: ";
    getline(cin, nome);

    Aluno aluno(numNotas);
    aluno.PoeNome(nome);

    cout << endl;
    cout << "Informe as notas:" << endl;
    cout << endl;
    for (int32_t j = 0; j < numNotas; ++j) {
      float nota;
      cout << j + 1 << "a. nota..........: ";
      cin >> nota;
      aluno.PoeNota(nota, j);
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    aluno.PoeMedia();
    alunos.push_back(aluno);
  }

  cout << endl;
  cout << "Relatorio Geral" << endl;
  cout << endl;
  cout << setiosflags(ios::left);
  cout << setw(41) << "Aluno";
  cout << resetiosflags(ios::left);

  cout << setiosflags(ios::right);
  for (int32_t j = 0; j < numNotas; ++j)
    cout << setw(7) << "Nota" << j + 1;
  cout << setw(8) << "Media";
  cout << endl << endl;

  for (const auto &aluno : alunos) {
    cout << resetiosflags(ios::right);
    cout << setiosflags(ios::left);
    cout << setw(41) << aluno.PegaNome();
    cout << resetiosflags(ios::left);
    cout << setiosflags(ios::right);
    for (int32_t j = 0; j < numNotas; ++j)
      cout << setw(8) << aluno.PegaNota(j);
    cout << setw(8) << aluno.PegaMedia();
    cout << endl;
    media_gp += aluno.PegaMedia();
  }

  media_gp /= numAlunos;

  cout << endl;
  cout << setw(74) << "Media Geral = ";
  cout << setw(7) << media_gp;
  cout << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
