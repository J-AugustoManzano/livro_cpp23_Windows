// C08EX06.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Serie {
  private:
    char serie;

  public:
    void PoeSerie(char serie) {
      this->serie = serie;
    }

    char PegaSerie() const {
      return serie;
    }

    Serie(void) {
      cout << "Construtor: Inicia classe Serie" << endl;
    }
    ~Serie(void) {
      cout << "Destrutor: Libera classe Serie";
      cout << endl;
    }
};

class Sala {
  protected:
    int32_t sala;

  public:
    void PoeSala(int32_t sala) {
      this->sala = sala;
    }

    int32_t PegaSala() const {
      return sala;
    }

    Sala(void) {
      cout << "Construtor: Inicia classe Sala" << endl;
    }
    ~Sala(void) {
      cout << "Destrutor: Libera classe Sala";
      cout << endl;
    }
};

class Aluno : public Sala, public Serie {
  private:
    string nome;
    vector<float> nota;
    float media;

  public:
    Aluno() : nota(4) {
      cout << "Construtor: Inicia classe Aluno\n" << endl;
    }

    ~Aluno() {
      cout << "\nDestrutor: Libera classe Aluno" << endl;
    }

    void PoeNome(string nome);
    string PegaNome(void) const;
    void PoeNota(char NT[6], int32_t pos);
    float PegaNota(int32_t pos) const;
    void PoeMedia(void);
    float PegaMedia(void) const;
};

void Aluno::PoeNome(string nome) {
  this->nome = nome;
}

string Aluno::PegaNome(void) const {
  return nome;
}

void Aluno::PoeNota(char NT[6], int32_t pos) {
  nota[pos] = atof(NT);
}

float Aluno::PegaNota(int32_t pos) const {
  return nota[pos];
}

void Aluno::PoeMedia(void) {
  media = 0;
  for (float n : nota)
    media += n;
  media /= nota.size();
}

float Aluno::PegaMedia(void) const {
  return media;
}

int main(void) {
  cout << setprecision(2) << fixed;

  Aluno aluno;
  string nome;
  char entranota[6];
  char entrasala[6];
  char serieEscolar;

  cout << "Cadastro de aluno" << endl;
  cout << endl;

  cout << "Informe o nome.....: ";
  getline(cin, nome);
  aluno.PoeNome(nome);

  cout << "Informe a sala.....: ";
  cin.getline(entrasala, sizeof(entrasala));
  aluno.PoeSala(atoi(entrasala));
  
  cout << "Informe a serie....: ";
  cin >> serieEscolar;
  aluno.PoeSerie(serieEscolar);
  cin.ignore();
  cout << endl;

  cout << "Informe as notas:" << endl;
  cout << endl;
  for (size_t i = 0; i <= 3; ++i) {
    cout << i + 1 << "a. nota...........: ";
    cin.getline(entranota, sizeof(entranota));
    aluno.PoeNota(entranota, i);
  }
  cout << endl;

  aluno.PoeMedia();

  cout << endl;
  cout << "Relatorio" << endl;
  cout << endl;
  cout << "Nome..........: " << aluno.PegaNome() << endl;
  cout << "Sala..........: " << aluno.PegaSala() << endl;
  cout << "Serie.........: " << aluno.PegaSerie() << endl;
  cout << endl;
  for (size_t i = 0; i <= 3; ++i) {
    cout << i + 1 << "a. nota......: ";
    cout << setw(5) << aluno.PegaNota(i) << endl;
  }
  cout << endl;

  cout << "Media.........: " << setw(5) << aluno.PegaMedia();
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
