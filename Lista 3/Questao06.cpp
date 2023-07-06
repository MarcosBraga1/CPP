/*Preencher um vetor com números inteiros (8 unidades); solicitar um número do
teclado. Pesquisar se esse número existe no vetor. Se existir, imprimir em qual
posição do vetor. Se não existir, imprimir mensagem que não existe.*/
#include <iostream>

using namespace std;

int main()
{
  int num[8] = {2, 4, 6, 8, 10, 12, 14, 16};
  int valor = 0;
  bool aux = true;

  cout << "Insira um valor inteiro: ";
  cin >> valor;

  for (int i = 0; i < 8; i++)
  {
    if (valor == num[i])
    {
      cout << "O valor inserido esta no vetor na posicao: " << i << endl;
      aux = false;
    }
  }
  if (aux)
  {
    cout << "O valor inserido nao esta no vetor." << endl;
  }
}