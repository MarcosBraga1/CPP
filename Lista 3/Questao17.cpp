/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene os dados em uma estrutura.*/
#include <iostream>

using namespace std;

struct dados
{
  string nome;
  int idade;
  string endereco;
};

int main()
{
  dados pessoal;
  cout << "Insira seu nome: ";
  cin >> pessoal.nome;
  cout << "Insira sua idade: ";
  cin >> pessoal.idade;
  cout << "Insira seu indereco: ";
  cin >> pessoal.endereco;
}