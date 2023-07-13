/*Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30
letras), autor (máximo 15 letras) e ano. Procure um livro por ano, perguntando ao
usuário essa informação. Mostre os dados de todos os livros encontrados publicados
naquele ano.*/
#include <iostream>

using namespace std;

struct dados
{
  char titulo[30];
  char autor[15];
  int ano;
};

int main()
{
  dados livro[5];
  int ano;

  for (int i = 0; i < 5; i++)
  {
    cout << "Insira o nome do livro " << i + 1 << ": ";
    cin >> livro[i].titulo;
    cout << "Insira o autor: ";
    cin >> livro[i].autor;
    cout << "Insira o ano de publicacao: ";
    cin >> livro[i].ano;
  }

  cout << "Procure um livro pelo ano de publicacao. Insira o ano: ";
  cin >> ano;
  for (int i = 0; i < 5; i++)
  {
    if (ano == livro[i].ano)
    {
      cout << "Livro encontrado: " << endl
           << "Titulo: " << livro[i].titulo << endl
           << "Autor: " << livro[i].autor << endl
           << "Ano de publicacao: " << livro[i].ano << endl;
    }
  }
}