/*Usar registro para armazenar dados de 100 alunos. Ler seus nomes e notas para
três provas. Calcular a soma das notas e verificar se ele foi ou não aprovado
(soma maior ou igual a 60). Informar a soma e a situação do aluno.*/
#include <iostream>
#include <iomanip>

using namespace std;

struct aluno
{
  string nome;
  float n1 = 0.0f;
  float n2 = 0.0f;
  float n3 = 0.0f;
  float soma = 0;
};

int main()
{
  aluno estudante[100];
  float nota[100];

  for (int i = 0; i < 100; i++)
  {
    cout << "Insira o nome do aluno " << i + 1 << ": ";
    cin >> estudante[i].nome;
    cout << "Insira a pontuacao da primeira prova: ";
    cin >> estudante[i].n1;
    cout << "Insira a pontuacao da segunda prova: ";
    cin >> estudante[i].n2;
    cout << "Insira a pontuacao da terceira prova: ";
    cin >> estudante[i].n3;
    nota[i] = estudante[i].n1 + estudante[i].n2 + estudante[i].n1;
  }

  for (int i = 0; i < 100; i++)
  {
    cout << "Aluno: " << estudante[i].nome << endl;
    cout << "Nota: " << nota[i] << endl;
    if (nota[i] >= 60)
    {
      cout << "Aluno aprovado!\n"
           << endl;
    }
    else
    {
      cout << "Aluno reprovado!\n"
           << endl;
    }
  }
}