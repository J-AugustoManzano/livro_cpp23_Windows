// C07EX10.CPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <exception>

using namespace std;

int main(void)
{
  vector<int32_t> matriz;
  int32_t valor;

  try {
    do {
      cout << "MATRIZ[";
      cout << setw(2) << matriz.size() + 1 << "] ";
      cout << "(0 para encerrar) = ";
      cin >> valor;
      cin.ignore(80, '\n');

      if (valor != 0)
        matriz.push_back(valor); 

    } while (valor != 0);

    cout << endl;
    cout << "Os valores informados sao:" << endl << endl;

    for (size_t i = 0; i < matriz.size(); ++i) {
      cout << "MATRIZ[" << setw(2) << i + 1 << "] = ";
      cout << setw(3) << matriz[i] << endl;
    }

  }
  catch (const bad_alloc &e) {
    cerr << "*** Memoria insuficiente: ";
    cerr << e.what() << " ***" << endl;
  }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

