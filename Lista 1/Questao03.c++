//Algoritmo que lê 5 números inteiros e identifica o maior e menor.
#include <iostream>

using namespace std;

int main()
{
  int numeros[5];
  cout << "Digite 5 numeros inteiros.\n";

  for (int i = 0; i < 5; i++){
    cout << "Numero " << i + 1 << ": ";
    cin >> numeros[i];
  }
  int maior = numeros[0];
  int menor = numeros[0];

  for (int i = 1; i < 5; i++){
    if (numeros[i] > maior){
      maior = numeros[i];
    }
    if (numeros[i] < menor){
      menor = numeros[i];
    }
  }

  cout << "O menor numero e: " << menor << "\n";
  cout << "O maior numero e: " << maior;

  system("pause");
  return 0;
  }