/*Ler os coeficientes de uma equação do primeiro grau (a*x + b = 0) e:
a) informar se ela é determinada, indeterminada ou impossível;
b) calcular e escrever a sua solução se existir.*/
#include <iostream>

using namespace std;

float solucao(float a, float b);

int main()
{
  float a = 0.0f;
  float b = 0.0f;

  cout << "Insira o valor de a: ";
  cin >> a;
  cout << "Insira o valor de b: ";
  cin >> b;

  if (a != 0)
  {
    cout << "A funcao e determinada!" << endl;
    cout << "A solucao e: " << solucao(a, b) << endl;
  }

  if (a == 0)
  {
    cout << "A funcao e impossivel!" << endl;
  }
}

float solucao(float a, float b)
{
  float x = -b / a;
  return x;
}