//Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.
#include <iostream>

using namespace std;

int main ()
{
  for(int num = 100; num <= 200; num++){
    if(num % 2 == 1){
      cout << num << endl;
    }
  }

  system("pause");
  return 0;
}