/*Solicitar a idade de várias pessoas e armazenar em um vetor.
Declarar e chamar função para imprimir:
1) Total de pessoas com menos de 21 anos;
2) Total de pessoas com mais de 50 anos.
O programa termina quando o usuário digitar “Fim”.*/
#include <iostream>
#include <string>

using namespace std;

void texto(int n1, int n2);

int main()
{
  int quant = 1;
  int idade[quant];
  int menor = 0;
  int maior = 0;
  string resposta;

  for (int i = 0; i < quant; i++)
  {
    quant++;
    cout << "Insira a idade da " << i + 1 << " pessoa: ";
    cin >> idade[i];

    if (idade[i] < 21)
    {
      menor++;
    }
    if (idade[i] > 50)
    {
      maior++;
    }

    cout << "Insira [fim] para sair, ou aperte qualquer tecla para continuar.\n";
    cin >> resposta;
    if (resposta == "fim")
    {
      cout << "\n";
      break;
    }
  }

  texto(menor, maior);
}

void texto(int n1, int n2)
{
  cout << "Pessoas com menos de 21 anos: " << n1 << endl;
  cout << "Pessoas com mais de 50 anos: " << n2 << endl;
}