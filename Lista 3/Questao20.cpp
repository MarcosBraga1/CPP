/*Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo
15 letras), ano e preço. Leia um valor p e mostre as informações de todos os
carros com preço menor que p.*/
#include <iostream>

using namespace std;

struct dados
{
  int ano;
  string marca;
  float preco;
};

int main()
{
  dados carro[5];
  carro[0] = {2020, "Chevrolet", 337900};
  carro[1] = {2017, "BMW - M3", 128000};
  carro[2] = {2015, "Mercedes", 99870};
  carro[3] = {2015, "Porsche", 24000};
  carro[4] = {2017, "VW - Gol", 36990};
  float p;

  cout << "Procure carros com valor a baixo do inserido!" << endl
       << "Insira um valor:";
  cin >> p;

  for (int i = 0; i < 5; i++)
  {
    if (p >= carro[i].preco)
    {
      cout << "Carro encontrado: " << endl
           << "Modelo: " << carro[i].marca << endl
           << "Ano: " << carro[i].ano << endl
           << "Preco: " << carro[i].preco << "\n\n";
    }
  }
}