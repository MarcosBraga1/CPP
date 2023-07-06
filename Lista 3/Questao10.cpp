/*No dia da estreia do filme “Senhor dos Anéis”, uma grande emissora de TV
realizou uma pesquisa logo após o encerramento do filme. Cada espectador
respondeu a um questionário no qual constava sua idade e a sua opinião em relação
ao filme: excelente – 3; bom – 2; regular – 1. Criar um algoritmo que receba a idade e
a opinião de 20 espectadores, calcule e imprima a média das idades e a percentagem
das pessoas que responderam excelente, bom e regular.*/
#include <iostream>

using namespace std;

int main()
{
  int idade[20];
  int nota[20];
  int m_idade = 0;
  int ex = 0, bom = 0, reg = 0;

  cout << "As notas sao classificadas em:\n[3] - Excelente\n[2] - Bom\n[1] - Regular\n";

  for (int i = 0; i < 20; i++)
  {
    cout << "Insira sua idade: ";
    cin >> idade[i];
    cout << "Insira a nota: ";
    cin >> nota[i];

    m_idade += idade[i];

    if (nota[i] == 3)
    {
      ex++;
    }
    else if (nota[i] == 2)
    {
      bom++;
    }
    else if (nota[i] == 1)
    {
      reg++;
    }
  }

  cout << "A media da idade e: " << m_idade / 20 << endl;
  cout << "A percentagem que acharam excelente e: " << (100 * ex) / 20 << endl;
  cout << "A percentagem que acharam bom e: " << (100 * bom) / 20 << endl;
  cout << "A percentagem que acharam regular e: " << (100 * reg) / 20 << endl;
}