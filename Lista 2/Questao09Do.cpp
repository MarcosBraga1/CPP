/*Escreva um algoritmo que leia números inteiros até que a soma de tais números
totalize no mínimo 100. Devem ser lidos tantos valores quantos necessários para 
que tal valor seja atingido ou superado. Quando isto ocorrer, o algoritmo também
deve exibir quantos números foram lidos e sua média.*/
#include <iostream>

using namespace std;

int main ()
{
  int num;
  int soma = 0;
  float media = 0.0f;
  int quant = 0;

  cout << "Digite apenas numeros inteiros!" << endl;

  do{
    cout << "Insira o " << quant + 1 << " numero: ";
    cin >> num;

    soma = soma + num;
    quant++;

    media = soma / quant;

    if (soma >= 100)
    {
      cout << "A soma dos numeros inseridos e 100 ou mais!" << endl;
      break;
    }
  } while (soma <= 100);
  
  cout << "Foram inseridos: " << quant << " numeros." << endl;
  cout << "A media dos numeros inseridos e: " << media << endl;

  system("pause");
  return 0;
}