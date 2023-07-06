/*Entrar com nome, nota da PR1 e nota da PR2 de 15 alunos. Imprimir uma listagem,
contendo: nome, nota da PR1, nota da PR2 e média de cada aluno. Ao final, calcule a
média geral da turma.*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string nome[15];
  float n1[15];
  float n2[15];
  float mediaturma = 0;
  float mediaturma1 = 0;
  float mediaturma2 = 0;

  for (int i = 0; i < 15; i++)
  {
    cout << "Insira o nome do aluno: ";
    cin >> nome[i];
    cout << "Insira a nota da 1 prova: ";
    cin >> n1[i];
    cout << "Insira a nota da 2 prova: ";
    cin >> n2[i];
    mediaturma1 += n1[i];
    mediaturma2 += n2[i];
  }

  for (int i = 0; i < 15; i++)
  {
    cout << nome[i] << ": "
         << "Prova 1 - " << n1[i] << "  Prova 2 - " << n2[i] << endl;
    cout << "Media do aluno: " << (n1[i] + n2[i]) / 2 << endl;
  }

  mediaturma1 / 15;
  mediaturma2 / 15;
  mediaturma = (mediaturma1 + mediaturma2) / 2;

  cout << "A media da turma e: " << mediaturma;
}