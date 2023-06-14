/*Escrever um algoritmo que receba a idade de dez pessoas e que calcule e
mostre a quantidade de pessoas com idade maior ou igual a 18 anos.*/
#include <iostream>

using namespace std;

int main ()
{
  int idade[10];
  int i = 0;
  int a = 0;

  do{
    cout << "Digite a idade da " << i + 1 << " pessoa: ";
    cin >> idade[i];
    i++;
  } while (i < 10);

  int quant = 0;
  do{
    if(idade[a] >= 18){
      quant++;
    }
    a++;
  } while (a < 10);

  cout << quant << " pessoas possuem 18 anos ou mais." << endl;
  
  system("pause");
  return 0;
}