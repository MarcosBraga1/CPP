/*Entrar via teclado com “N” valores quaisquer. O valor “N” (que representa a 
quantidade de números) será digitado, deverá ser positivo, mas menor que vinte. 
Caso a quantidade não satisfaça a restrição, enviar mensagem de erro e solicitar 
o valor novamente. Após exibir os dados, perguntar ao usuário de deseja ou não 
uma nova execução do algoritmo. Consistir a resposta no sentido de aceitar 
somente “S” ou “N” e encerrar o algoritmo em função dessa resposta.*/
#include <iostream>

using namespace std;

int main (){
  int quant;
  int i = 0;
  int a = 0;

  cout << "O numero digitado deve ser menor que 20 e positivo!" << endl;
  cout << "Quantos digitos serao inseridos?: ";
  cin >> quant;

  if (quant >= 20 || quant < 0){
    cout << "Valor invalido! Insira novamente.\n\n";
    return main();
  }
  
  float* num = new float[quant];

  do{
    cout << "Insira o " << i + 1 << " numero: ";
    cin >> num[i];
    i++;
  } while (i < quant);
  

  float maior = num[0];
  float menor = num[0];
  float soma = 0;
  float media = 0;
  float porcentagemp;
  float nump = 0;
  float porcentagemn;
  float numn = 0;

  do{
    if (num[a] > maior){
      maior = num[a];
    }
    if (num[a] < menor){
      menor = num[a];
    }

    soma = soma + num[a];

    media = soma / quant;

    if (num[a] > 0){
      nump++;
    }
    else if (num[a] < 0){
      numn++;
    }
    porcentagemp = (100 * nump) / quant;
    porcentagemn = (100 * numn) / quant;
    a++;
  } while (a < quant);
  
  cout << "\n\nO maior valor e: " << maior << endl;
  cout << "O menor valor e: " << menor << endl;
  cout << "A soma dos valores e: " << soma << endl;
  cout << "A media dos valores e: " << media << endl;
  cout << "A porcentagem de valores que sao positivos e: " << porcentagemp << endl;
  cout << "A porcentagem de valores que sao negativos e: " << porcentagemn << endl;

  bool b = true;

  do{
    char resp;
    cout << "Realizar uma nova execucao?:\nS - Sim.\nN - Nao." << endl;
    cin >> resp;
    if (resp == 's' || resp == 'S'){
      cout << "\n\n";
      return main();
    }
    else if (resp == 'n' || resp == 'N'){
      b = false;
      return 0;
    }
    else{
      cout << "Resposta invalida!\n\n";
    }
  } while (b == true);

  system("pause");
  return 0;
}