// C05EX07.CPP

#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)
{

  cout << setprecision(10) << fixed << right;

  cout << setw(14) << acos(-1)           << endl;
  cout << setw(14) << acos(0.5)*180/M_PI << endl;

  cout << setw(14) << asin(-1)           << endl;
  cout << setw(14) << asin(0.5)*180/M_PI << endl;

  cout << setw(14) << atan(0.5)          << endl;
  cout << setw(14) << atan(1)*180/M_PI   << endl;

  cout << setw(14) << atan2(1,1)         << endl;
  cout << setw(14) << atan2(-1,-1)       << endl;

  cout << setw(14) << cos(45*M_PI/180)   << endl;
  cout << setw(14) << cos(atan(1))       << endl;

  cout << setw(14) << sin(M_PI/6)        << endl;
  cout << setw(14) << sin(1)             << endl;

  cout << setw(14) << tan(4)             << endl;
  cout << setw(14) << tan(M_PI/4)        << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
