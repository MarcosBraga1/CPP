/*Escrever um algoritmo que leia um valor para uma variável N de 1 a 10 e
calcule a tabuada de N. Mostre a tabuada na forma:
0 x N = 0, 1 x N = 1N, 2 x N = 2N, ..., 10 x N = 10N.*/
#include <iostream>

using namespace std;

int main ()
{
  int num, mult, res;

  cout << "Insira um numero inteiro: ";
  cin >> num;

  for(mult = 0; mult <= 10; mult++){
    res = mult * num;
    cout << mult << "x" << num << "=" << res << ", ";
  }

  system("pause");
  return 0;
}