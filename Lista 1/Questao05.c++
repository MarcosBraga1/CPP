/*Algoritmo que lê o nome de dois times e a quantidade de gols na partida.
Escreve o nome do time vencedor ou empate se tiverem a mesma quantidade de gols.*/
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int g1, g2;
  string t1, t2;

  cout << "Escreva o nome do primeiro time: ";
  cin >> t1;
  cout << "Quantidade de gols que " << t1 << " marcou na partida: ";
  cin >> g1;
  cout << "Escreva o nome do segundo time: ";
  cin >> t2;
  cout << "Quantidade de gols que " << t2 << " marcou na partida: ";
  cin >> g2;

  if (g1 > g2){
    cout << "O " << t1 << " foi o time vencedor!";
  }
  else if (g1 == g2){
    cout << "Houve um empate!";
  }
  else{
    cout << "O " << t2 << " foi o time vencedor!";
  }

    system("pause");
    return 0;
    }