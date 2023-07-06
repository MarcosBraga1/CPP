/*Declare uma função para o cálculo do salário líquido de um funcionário.
Os cálculos são os seguintes:
Salário Bruto = Horas trabalhadas * Salário hora.
Desconto = 0% do salário bruto, se este for menor que R$ 100,00.
Desconto = 10% do salário bruto, se este se encontra entre R$ 100,00 e R$ 200,00 incluso.
Desconto = 20% do salário bruto, se este for maior do que R$ 200,00.
Os valores de horas trabalhadas e salário hora deverão ser lidos do teclado.
Sabe-se que o salário líquido é igual ao salário bruto menos o desconto.*/

#include <iostream>

using namespace std;

float salariol(int horas, float salarioh);

int main()
{
  int h = 0;
  float sh = 0.0f;

  cout << "Insira a quantidade de horas trabalhadas: ";
  cin >> h;
  cout << "Insira o valor do salario hora: ";
  cin >> sh;

  cout << "O salario liquido e de: " << salariol(h, sh) << endl;
}

float salariol(int horas, float salarioh)
{
  float salariob = horas * salarioh;
  int salarioliq = 0;
  if (salariob >= 100 && salariob <= 200)
  {
    salarioliq = salariob * 0.9;
  }
  else if (salariob > 200)
  {
    salarioliq = salariob * 0.8;
  }
  else
  {
    salarioliq = salariob;
  }
  return salarioliq;
}