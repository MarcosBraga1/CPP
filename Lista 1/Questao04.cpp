/*Algoritmo que calcula o saldo atual de uma conta.
saldo Atual = saldo - debito + credito.*/
#include <iostream>

using namespace std;

int main ()
{
  int conta, saldo, credito, debito, saldo_a;
  cout << "Insira o numero da conta: ";
  cin >> conta;
  cout << "Digite o saldo: ";
  cin >> saldo;
  cout << "Digite o debito: ";
  cin >> debito;
  cout << "Digite o credito: ";
  cin >> credito;

  saldo_a = (saldo - debito) + credito;
  cout << "O saldo atual e: " << saldo_a;
  if (saldo_a >= 0){
    cout << "\nO salto esta positivo.";
  }
  else{
    cout << "\nO saldo esta negativo.";
  }

  system("pause");
  return 0;
}