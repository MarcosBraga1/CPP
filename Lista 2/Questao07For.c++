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

  cout << "O numero digitado deve ser menor que 20 e positivo!" << endl;
  cout << "Quantos digitos serao inseridos?: ";
  cin >> quant;

  if (quant >= 20 || quant < 0){
    cout << "Valor invalido! Insira novamente.\n\n";
    return main();
  }
  
  float* num = new float[quant];

  for (int i = 0; i < quant; i++){
    cout << "Insira o " << i + 1 << " numero: ";
    cin >> num[i];
  }

  float maior = num[0];
  float menor = num[0];
  float soma = 0;
  float media = 0;
  float porcentagemp;
  float nump = 0;
  float porcentagemn;
  float numn = 0;

  for (int i = 0; i < quant; i++){
    if (num[i] > maior){
      maior = num[i];
    }
    if (num[i] < menor){
      menor = num[i];
    }

    soma = soma + num[i];

    media = soma / quant;

    if (num[i] > 0){
      nump++;
    }
    else if (num[i] < 0){
      numn++;
    }
    porcentagemp = (100 * nump) / quant;
    porcentagemn = (100 * numn) / quant;
  }  
  
  cout << "\n\nO maior valor e: " << maior << endl;
  cout << "O menor valor e: " << menor << endl;
  cout << "A soma dos valores e: " << soma << endl;
  cout << "A media dos valores e: " << media << endl;
  cout << "A porcentagem de valores que sao positivos e: " << porcentagemp << endl;
  cout << "A porcentagem de valores que sao negativos e: " << porcentagemn << endl;

  for (bool i = true; i == true;){
    char resp;
    cout << "Realizar uma nova execucao?:\nS - Sim.\nN - Nao." << endl;
    cin >> resp;
    if (resp == 's' || resp == 'S'){
      cout << "\n\n";
      return main();
    }
    else if (resp == 'n' || resp == 'N'){
      i = false;
      return 0;
    }
    else{
      cout << "Resposta invalida!\n\n";
    }
  }

  system("pause");
  return 0;
}