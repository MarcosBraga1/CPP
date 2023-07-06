/*Preencher um vetor com dez números reais, imprimir o maior e o menor.*/
#include <iostream>

using namespace std;

int main()
{
  float num[10] = {1.23, 2.45, 3.75, 4.22, 5.87, 6.98, 7.02, 8.00, 9.99, 10.05};
  float maior = num[0];
  float menor = num[0];

  for (int i = 0; i < 10; i++)
  {
    if (num[i] > maior)
    {
      maior = num[i];
    }
    else if (num[i] < menor)
    {
      menor = num[i];
    }
  }

  cout << "O maior numero e: " << maior << endl;
  cout << "O menor numero e: " << menor << endl;
}