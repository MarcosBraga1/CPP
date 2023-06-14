/*Escrever um algoritmo que receba a idade de 15 pessoas e que calcule e mostre:
a) A quantidade de pessoas em cada faixa etária;
b) A percentagem de pessoas na primeira e na última faixa etária, com relação
   ao total de pessoas:*/
#include <iostream>

using namespace std;

int main ()
{
  int idade[15];
  int i = 0;
  int a = 0;

  while (i < 15)
  {
    cout << "Digite a idade da " << i + 1 << " pessoa: ";
    cin >> idade[i];
    i++;
  }

  int faixa1 = 0;
  int faixa2 = 0;
  int faixa3 = 0;
  int faixa4 = 0;
  int faixa5 = 0;

  while (a < 15)
  {
    if(idade[a] < 16){
    faixa1++;
  } 
  else if(idade[a] > 15 && idade[a] < 31){
    faixa2++;
  } 
  else if(idade[a] > 30 && idade[a] < 46){
    faixa3++;
  } 
  else if(idade[a] > 45 && idade[a] < 61){
    faixa4++;
  } 
  else if(idade[a] > 60){
    faixa5++;
  }
  a++;
  }
  
  cout << "A quantidade de pessoas: " << endl;
  cout << "Ate 15 anos: " << faixa1 << endl;
  cout << "De 16 a 30 anos: " << faixa2 << endl;
  cout << "De 31 a 45 anos: " << faixa3 << endl;
  cout << "De 46 a 60 anos: " << faixa4 << endl;
  cout << "Acime de 61 anos: " << faixa5 << endl;

  float porcentagem = (100*(faixa1+faixa2))/15;

  cout << "A porcentagem de pessoas na primeira e ultima feixa etaria";
  cout << " em relacao aos demais e de: " << porcentagem << endl;

  system("pause");
  return 0;
}