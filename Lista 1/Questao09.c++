//Algoritmo que lê um número inteiro e diz se ele é ímpar ou par.
#include <iostream>

using namespace std;

int main ()
{
  int numero;

  cout << "Insira um numero inteiro: ";
  cin >> numero;

  if (numero % 2 == 1){
    cout << "O numero e impar.";
  }
  else{
    cout << "O numero e par.";
  }

  system("pause");
  return 0;
}