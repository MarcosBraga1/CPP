//Algoritmo que inverte o valor de duas variáveis.
#include <iostream>

using namespace std;

int main ()
{
  int x, y, aux;
  cout << "Insira um valor para x: ";
  cin >> x;
  cout << "Insira um valor para y: ";
  cin >> y;

  cout << "x = " << x << "\n";
  cout << "y = " << y << "\n";

  aux = x;
  x = y;
  y = aux;

  cout << "Novo valor x = " << x << "\n";
  cout << "Novo valor y = " << y << "\n";

  system("pause");
  return 0;
}