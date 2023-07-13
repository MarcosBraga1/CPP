/*Fazer um algoritmo para corrigir provas de múltipla escolha
(alternativas: a, b, c, d e e). Cada prova tem 10 questões, cada questão valendo
um ponto. O primeiro conjunto de dados a ser lido e armazenado em um vetor será
o gabarito para a correção da prova. Os outros dados serão os números dos alunos
e suas respectivas respostas. A sala tem 36 alunos. O algoritmo deverá calcular
e imprimir:
a - para cada aluno, o seu número e sua nota;
b – a porcentagem de aprovação, sabendo-se que a nota mínima de aprovação é 6;*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  string gabarito[10];
  string resposta[36][10];
  int aluno[10];
  int nota[36];
  int nt = 0;
  int aprovados = 0;
  int questao = 0;

  cout << "Insira o gabarito da prova." << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << "Resposta correta da questao " << i + 1 << ": ";
    cin >> gabarito[i];
  }

  for (int alun = 0; alun < 36; alun++)
  {
    cout << "Insira o numero do aluno: ";
    cin >> aluno[alun];
    for (int quest = 0; quest < 10; quest++)
    {
      cout << "Insira a alternativa marcada na questao " << (questao += 1) << ": ";
      cin >> resposta[alun][quest];
    }
    questao = 0;
  }

  for (int alun = 0; alun < 36; alun++)
  {
    cout << "Numero aluno: " << aluno[alun] << endl;
    for (int quest = 0; quest < 10; quest++)
    {
      if (resposta[alun][quest] == gabarito[quest])
      {
        nt += 1;
      }
    }
    nota[alun] = nt;
    nt = 0;
    cout << "Nota: " << nota[alun] << "\n\n";
  }

  for (int i = 0; i < 36; i++)
  {
    if (nota[i] >= 6)
    {
      aprovados += 1;
    }
  }
  float aux = (aprovados / 36) * 100;
  cout << "A porcentagem de aprovados e de: " << aux << "%";
}