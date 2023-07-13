/*Fazer um algoritmo que:
a – leia A e B, duas variáveis compostas bidimensionais homogêneas de dimensão m
X n (m ≤ 20, n ≤ 30). Os valores de m e n são fornecidos inicialmente.
b – calcule e imprima C, sendo C = A*B (para * uma multiplicação de Hadamard).
c – determine e imprima a matriz transposta de A.*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int m = 0;
  int n = 0;

  while (m == 0)
  {
    cout << "Insira o numero de linhas(menor igual a 20): ";
    cin >> m;

    if (m >= 20 || m < 0)
    {
      cout << "Numero invalido!" << endl;
      m = 0;
    }
  }

  while (n == 0)
  {
    cout << "Insira o numero de colunas(menor igual a 30): ";
    cin >> n;

    if (n >= 30 || n < 0)
    {
      cout << "Numero invalido!" << endl;
      n = 0;
    }
  }

  int a[m][n];
  int b[m][n];
  int c[m][n];

  cout << "Matriz A" << endl;
  for (int lin = 0; lin < m; lin++)
  {
    for (int col = 0; col < n; col++)
    {
      cout << "Insira o valor na linha "
           << lin + 1 << " coluna " << col + 1 << ": ";
      cin >> a[lin][col];
    }
  }

  cout << "Matriz B" << endl;
  for (int lin = 0; lin < m; lin++)
  {
    for (int col = 0; col < n; col++)
    {
      cout << "Insira o valor na linha "
           << lin + 1 << " coluna " << col + 1 << ": ";
      cin >> b[lin][col];
    }
  }

  for (int lin = 0; lin < m; lin++)
  {
    for (int col = 0; col < n; col++)
    {
      c[lin][col] = a[lin][col] * b[lin][col];
      cout << setw(8) << c[lin][col];
    }
    cout << endl;
  }
}