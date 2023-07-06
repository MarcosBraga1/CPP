/*Criar um algoritmo que receba a idade e o peso de 20 pessoas. Calcular e imprimir
as médias dos pesos das pessoas da mesma faixa etária. As faixas etárias são:
de 1 a 10 anos, de 11 a 20 anos, de 21 a 30 anos e maiores de 30 anos.*/

#include <iostream>

using namespace std;

float media(float peso, int quant);

int main()
{
  int idade[20];
  float peso[20];
  int somaf1 = 0, somaf2 = 0, somaf3 = 0, somaf4 = 0;
  int quant1 = 0, quant2 = 0, quant3 = 0, quant4 = 0;

  for (int i = 0; i < 20; i++)
  {
    cout << "Insira a idade da " << i + 1 << " pessoa: ";
    cin >> idade[i];
    cout << "Insira o peso: ";
    cin >> peso[i];

    if (idade[i] >= 1 && idade[i] <= 10)
    {
      somaf1 += peso[i];
      quant1++;
    }

    if (idade[i] >= 11 && idade[i] <= 20)
    {
      somaf2 += peso[i];
      quant2++;
    }

    if (idade[i] >= 21 && idade[i] <= 30)
    {
      somaf3 += peso[i];
      quant3++;
    }

    if (idade[i] >= 31)
    {
      somaf4 += peso[i];
      quant4++;
    }
  }

  cout << "A media de peso da primeira faixa etaria e: " << media(somaf1, quant1) << endl;
  cout << "A media de peso da primeira faixa etaria e: " << media(somaf2, quant2) << endl;
  cout << "A media de peso da primeira faixa etaria e: " << media(somaf3, quant3) << endl;
  cout << "A media de peso da primeira faixa etaria e: " << media(somaf4, quant4) << endl;
}

float media(float peso, int quant)
{
  float m = peso / quant;
  return m;
}