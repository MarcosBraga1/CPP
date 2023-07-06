/*Ler uma medida em polegadas na forma fracionária “a/b” (sendo “a” e “b” inteiros
e supondo “b ≠ 0”). Declarar uma função para calcular a esta medida em milı́metros.
(1 polegada = 25,4 mm). Escrever o resultado.*/
#include <iostream>

using namespace std;

float conversao(int numerador, int denominador);

int main()
{
  int num, den;

  cout << "Insira o valor do numerador: ";
  cin >> num;
  cout << "Insira o valor do denominador: ";
  cin >> den;

  if (den == 0)
  {
    cout << "Valor invalido, o denominador nao pode ser igual a 0!" << endl;
    return main();
  }

  cout << "O valor da polegada em mm e: " << conversao(num, den) << endl;
}

float conversao(int numerador, int denominador)
{
  float milimetros = (numerador * 25.4) / denominador;
  return milimetros;
}