// C08EX10.CPP

#include <iostream>
#include <cmath>

using namespace std;

class Area
{
  public:

    // Area: quadrado
    long area(int x) {
      return pow(x, 2);
    }

    // Area: cilindro
    double area(float r, float h) {
      return r * r * 3.14159 * h;
    }

    // Area: Cubo
    long area(int x, int y, int z) {
      return x * y * z;
    }
};

int main(void)
{
  Area calc;

  cout << "Area: Quadrado ..: " << calc.area(5) << endl;
  cout << "Area: Cubo ......: " << calc.area(5,6,7) << endl;
  cout << "Area: Cilindro ..: " << calc.area(7,3) << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
