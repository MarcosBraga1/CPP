//Algoritmo que dada a idade de um nadador classifica-o em uma categoria.
#include <iostream>

using namespace std;

int main ()
{
  int idade;
  
  cout << "Insira a idade do nadador: ";
  cin >> idade;

  if (idade >= 5 && idade <= 7){
    cout << "Classificado na categoria infantil A";
  }
  else if (idade >=8 && idade <= 10){
    cout << "Classificado na categoria infantil B";
  }
  else if (idade >= 11 && idade <= 13){
    cout << "Classificado na categoria juvenial A";
  }
  else if (idade >= 14 && idade <= 17){
    cout << "Classificado na categoria juvenial B";
  }
  else if (idade >= 18){
    cout << "Classificado na categoria adulto";
  }

  system("pause");
  return 0;
}