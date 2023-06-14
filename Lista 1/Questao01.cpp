//Algoritmo que lê um valor e escreve seu antecessor e sucessor.
#include <iostream>

using namespace std;

int main()
{
  int x = 0;
  cout << "Digite um numero: ";
  cin >> x;
  int ant = x - 1;
  int suc = x + 1;
  cout << "Seu antecessor e: " << ant << "\nSeu sucessor e: " << suc;

  system("pause");
  return 0;
}