//Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.
#include <iostream>

using namespace std;

int main ()
{
  int num = 0;
  while (num <= 200){
    if(num % 2 == 1){
      cout << num << endl;
      num++;
    }
    else{
      num++;
    }
  }

  system("pause");
  return 0;
}