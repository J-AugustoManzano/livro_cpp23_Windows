// C01EX03.CPP

#include <iostream>

using namespace std;

int main(void)
{
  #if __cplusplus == 199711L
    cout << "Suporta C++98" << endl;
  #elif __cplusplus == 201103L
    cout << "Suporta C++11" << endl;
  #elif __cplusplus == 201402L
    cout << "Suporta C++14" << endl;
  #elif __cplusplus == 201703L
    cout << "Suporta C++17" << endl;
  #elif __cplusplus == 202002L
    cout << "Suporta C++20" << endl;
  #elif __cplusplus == 202302L
    cout << "Suporta C++23" << endl;
  #elif __cplusplus > 202302L
    cout << "Suporta versao futura do C++" << endl;
  #endif

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();

  return 0;
}
