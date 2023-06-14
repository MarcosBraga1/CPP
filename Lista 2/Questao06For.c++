/*Escrever um algoritmo em função de uma escolha, solicitar os dados
necessários para o cálculo da respectiva área. Enviar mensagem de erro se o
usuário escolher uma opção inexistente. Encerrar o algoritmo somente quando
selecionada a opção de finalização.

1 – Triângulo
2 – Quadrado
3 – Retângulo
4 – Círculo
5 - Fim*/
#include <iostream>

using namespace std;

int main ()
{
  int op;
  float n1 = 0.0f;
  float n2 = 0.0f;
  float area = 0.0f;
  int aux;

  cout << "Bem-Vindo a calculadora de Area!" << endl;
  cout << "1 - Triangulo\n2 - Quadrado\n3 - Retangulo\n4 - Circulo\n5 - Fim\n";
  cout << "Escolha uma opcao: ";
  cin >> op;

  for(op; op != 5;){
    switch (op){
    case 1:
      cout << "Insira o tamanho da base: ";
      cin >> n1;
      cout << "Insira o tamanho da altura: ";
      cin >> n2;
      area = (n1 * n2) / 2;
      cout << "\nA area do triangulo e: " << area << "." << endl;

      cout << "Realizar outra operacao?\n1 - Sim.\n2 - Nao.\n3 - Menu.\n";
      cin >> aux;

      if (aux == 2){
        return 0;
      }
      else if (aux == 3){
        cout << "\n\n";
        return main();
      }
      else if (aux != 1 && aux != 2 && aux != 3){
        cout << "Valor invalido! Retornando ao menu.\n\n";
        system("pause");
        return main();
      }
    break;
    case 2:
      cout << "Insira o tamanho da base: ";
      cin >> n1;
      cout << "\nInsira o tamanho da altura: ";
      cin >> n2;
      area = n1 * n2;
      cout << "\nA area do quadrado e: " << area << "." << endl;
      
      cout << "Realizar outra operacao?\n1 - Sim.\n2 - Nao.\n3 - Menu.\n";
      cin >> aux;

      if (aux == 2){
        return 0;
      }
      else if (aux == 3){
        cout << "\n\n";
        return main();
      }
      else if (aux != 1 && aux != 2 && aux != 3){
        cout << "Valor invalido! Retornando ao menu.\n\n";
        system("pause");
        return main();
      }
    break;
    case 3:
      cout << "Insira o tamanho da base: ";
      cin >> n1;
      cout << "Insira o tamanho da altura: ";
      cin >> n2;
      area = n1 * n2;
      cout << "\nA area do retangulo e: " << area << "." << endl;
      
      cout << "Realizar outra operacao?\n1 - Sim.\n2 - Nao.\n3 - Menu.\n";
      cin >> aux;

      if (aux == 2){
        return 0;
      }
      else if (aux == 3){
        cout << "\n\n";
        return main();
      }
      else if (aux != 1 && aux != 2 && aux != 3){
        cout << "Valor invalido! Retornando ao menu.\n\n";
        system("pause");
        return main();
      }
    break;
    case 4:
      cout << "Insira o tamanho do raio: ";
      cin >> n1;
      cout << "Insira o valor de PI: ";
      cin >> n2;
      area = n2 * (n1 * n1);
      cout << "\nA area do triangulo e: " << area << "." << endl;
      
      cout << "Realizar outra operacao?\n1 - Sim.\n2 - Nao.\n3 - Menu.\n";
      cin >> aux;

      if (aux == 2){
        return 0;
      }
      else if (aux == 3){
        cout << "\n\n";
        return main();
      }
      else if (aux != 1 && aux != 2 && aux != 3){
        cout << "Valor invalido! Retornando ao menu.\n\n";
        system("pause");
        return main();
      }
    break;
    case 5:

    break;

    default:
      cout << "Numero invalido! Escolha uma das opcoes." << endl;
      system("pause");
      cout << "\n\n";
      return main();
      break;
    }
  }

  system("pause");
  return 0;
}