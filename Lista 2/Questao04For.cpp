/*Escrever um algoritmo que receba a idade de dez pessoas e que calcule e
mostre a quantidade de pessoas com idade maior ou igual a 18 anos.*/
#include <iostream>

using namespace std;

int main ()
{
  int idade[10];

  for(int i = 0; i < 10; i++){
    cout << "Digite a idade da " << i + 1 << " pessoa: ";
    cin >> idade[i];
  }

  int quant = 0;
  for(int i = 0; i < 10; i++){
    if(idade[i] >= 18){
      quant++;
    }
  }
  cout << quant << " pessoas possuem 18 anos ou mais." << endl;

  system("pause");
  return 0;
}