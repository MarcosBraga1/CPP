/*Algoritmo que lê a idade de dois homens e duas mulheres (Considerando idades diferentes).
Escreve a soma das idades do homem mais velho com a mulher mais nova.
Escreve o produto das idades do homem mais novo com a mulher mais velha.*/
#include <iostream>

using namespace std;

int main ()
{
  int ih1, ih2, im1, im2, ihmv, ihmn, immv, immn;
  ihmv = 0; ihmn = 0; immv = 0; immn = 0;

  cout << "Insira a idade do primeiro homem: "; 
  cin >> ih1;
  cout << "Insira a idade do segundo homem: "; 
  cin >> ih2;
  cout << "Insira a idade da primeira mulher: "; 
  cin >> im1;
  cout << "Insira a idade da segunda mulher: "; 
  cin >> im2;

  if (ih1 > ih2){
    ihmv = ih1;
    ihmn = ih2;
  } 
  else{
    ihmv = ih2;
    ihmn = ih1;
  }
  if (im1 > im2){
    immv = im1;
    immn = im2;
  }
  else{
    immv = im2;
    immn = im1;
    }

  int soma = ihmv + immn;
  int produto = ihmn * immv;

  cout<<"A soma das idades do homem mais velho com a mulher mais nova e: "<<soma<<"\n";
  cout<<"O produto das idades do homem mais novo com a mulher mais velha e: "<<produto;
  
  system("pause");
  return 0;
  }