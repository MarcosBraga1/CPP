/*Declarar e chamar funções para, recebendo como argumentos dois números
inteiros, calcular e mostrar a soma, a multiplicação deles.*/
#include <iostream>

using namespace std;

int soma(int num1, int num2);
int mult(int num1, int num2);

int main()
{
  int n1, n2;

  cout << "Insira o primeiro valor inteiro: ";
  cin >> n1;
  cout << "Insira o segundo valor inteiro: ";
  cin >> n2;

  cout << "A soma dos valores e: " << soma(n1, n2) << endl
       << "A multiplicacao dos valores e: " << mult(n1, n2) << endl;
}

int soma(int num1, int num2)
{
  int s = num1 + num2;
  return s;
}

int mult(int num1, int num2)
{
  int m = num1 * num2;
  return m;
}