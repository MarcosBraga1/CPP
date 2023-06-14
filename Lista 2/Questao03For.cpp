/*Escreva um algoritmo que lê 15 valores reais, encontra o maior e o menor
deles e mostra o resultado.*/
#include <iostream>

using namespace std;

int main ()
{
  float num[15];

  cout << "Digite numero reais." << endl;

  for(int i = 0; i < 15; i++){
    cout << "Digite o " << i + 1 << " numero: ";
    cin >> num[i];
  }

  float maior = num[0];
  float menor = num[0];

  for(int i = 0; i < 15; i++){
    if(num[i] > maior){
      maior = num[i];
    }
    if(num[i] < menor){
      menor = num[i];
    }
  }

  cout << "O maior numero e: " << maior << endl;
  cout << "O menor numero e: " << menor << endl;

  system("pause");
  return 0;
}