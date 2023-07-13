/*Faça um programa que armazene em um registro de dados (estrutura composta)
os dados de dez funcionários de uma empresa, compostos de: Nome, Idade, Sexo
(M/F), CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que
ocupa (string de até 30 caracteres) e Salário. Os dados devem ser digitados pelo
usuário, armazenados na estrutura e exibidos na tela.*/
#include <iostream>

using namespace std;

struct dados
{
  string nome;
  int idade;
  char sexo;
  string cpf;
  string nascimento;
  int setor;
  char cargo[30];
  float salario;
};

int main()
{
  dados funcionario[10];

  for (int i = 0; i < 10; i++)
  {
    cout << "Insira o nome do " << i + 1 << " funcionario: ";
    cin >> funcionario[i].nome;
    cout << "Insira a idade: ";
    cin >> funcionario[i].idade;
    cout << "Insira o sexo[M/F]: ";
    cin >> funcionario[i].sexo;
    cout << "Insira CPF: ";
    cin >> funcionario[i].cpf;
    cout << "Insira a data de nascimento: ";
    cin >> funcionario[i].nascimento;
    cout << "Insira o setor que trabalha: ";
    cin >> funcionario[i].setor;
    cout << "Insira o cargo que ocupa: ";
    cin >> funcionario[i].cargo;
    cout << "Insira o salario: ";
    cin >> funcionario[i].salario;
  }

  for (int i = 0; i < 10; i++)
  {
    cout << "Nome: " << funcionario[i].nome << endl
         << "Idade: " << funcionario[i].idade << endl
         << "Sexo: " << funcionario[i].sexo << endl
         << "CPF: " << funcionario[i].cpf << endl
         << "Nascimento: " << funcionario[i].nascimento << endl
         << "Setor: " << funcionario[i].setor << endl
         << "Cargo " << funcionario[i].cargo << endl
         << "Salario: " << funcionario[i].salario << endl
         << "\n";
  }
}