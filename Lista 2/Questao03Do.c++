/*Escreva um algoritmo que lê 15 valores reais, encontra o maior e o menor
deles e mostra o resultado.*/
#include <iostream>

using namespace std;

int main ()
{
  float num[15];
  int i = 0;
  int a = 0;

  cout << "Digite numeros reais." << endl;

  do{
    cout << "Digite o " << i + 1 << " numero: ";
    cin >> num[i];
    i++;
  } while (i < 15);
  
  float maior = num[0];
  float menor = num[0];

  do{
    if(num[a] > maior){
      maior = num[a];
    }
    if(num[a] < menor){
      menor = num[a];
    }
    a++;
  } while (a < 15);

  cout << "O maior numero e: " << maior << endl;
  cout << "O menor numero e: " << menor << endl;0

  system("pause");
  return 0;
}