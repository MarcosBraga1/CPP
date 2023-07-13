/*Preencher duas matrizes bidimensionais de ordem 2x2. Calcular a matriz de
produtos cruzados.*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a[2][2] = {
      {10, 2},
      {6, -2}};

  int b[2][2] = {
      {1, -1},
      {-1, 1}};

  int w[2][2];

  for (int lin = 0; lin < 2; lin++)
  {
    for (int col = 0; col < 2; col++)
    {
      w[lin][col] = 0;
      for (int k = 0; k < 2; k++)
      {
        w[lin][col] = w[lin][col] + a[lin][k] * b[k][col];
      }
    }
  }

  for (int lin = 0; lin < 2; lin++)
  {
    for (int col = 0; col < 2; col++)
    {
      cout << setw(8) << w[lin][col];
    }
    cout << endl;
  }
}