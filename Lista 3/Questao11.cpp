/*Dadas duas variáveis compostas bidimensionais homogêneas A e B. Calcular o
conjunto C=A+B.*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a[4][4] = {
      {1, 3, 2, 0},
      {3, 1, 0, 2},
      {2, 3, 0, 1},
      {0, 2, 1, 3}};

  int b[4][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 0, 9, 8},
      {7, 6, 5, 4}};

  int c[4][4];

  for (int lin = 0; lin < 4; lin++)
  {
    for (int col = 0; col < 4; col++)
    {
      c[lin][col] = a[lin][col] + b[lin][col];
      cout << setw(8) << c[lin][col];
    }
    cout << endl;
  }
}