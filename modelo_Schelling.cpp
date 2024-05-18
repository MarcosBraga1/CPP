#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>

using namespace std;

const int max_size = 1000;
int tam_matriz, quant_agentes, limiar, matriz[max_size][max_size];
float quant_vazio;

// Inicialização da matriz e coleta de dados
void coletar(){
  cout << "Qual o tamanho da matriz?: ";
  cin >> tam_matriz;

  cout << "Qual o numero de casas vazias? (Em porcentagem e inteiro): ";
  cin >> quant_vazio;
  quant_vazio = (quant_vazio / 100) * (tam_matriz * tam_matriz);

  cout << "Qual o limiar de tolerancia a diferenca? (Inteiro entre 1 e 8): ";
  cin >> limiar;

  quant_agentes = ((tam_matriz * tam_matriz) - quant_vazio) / 2;
}

// Preenchimento da matriz com os dados coletados
void preencher(){
  int count_vazio, count_agente, matriz_aux[tam_matriz * tam_matriz];
  count_vazio = 0;
  count_agente = 0;

  // Preenche uma matriz unidimensional com os valores
  for (int i = 0; i < (tam_matriz * tam_matriz); i++){
    if (count_vazio < quant_vazio){
      matriz_aux[i] = 0;
      count_vazio++;
    }
    else if (count_agente < quant_agentes){
      matriz_aux[i] = 1;
      count_agente++;
    }
    else{
      matriz_aux[i] = 2;
    }
  }

  // Embaralhar a matriz preenchida
  srand(time(0));
  random_shuffle(matriz_aux, matriz_aux + (tam_matriz * tam_matriz));

  // Preenche a matriz bidimensional com os valores embaralhados
  for (int i = 0; i < (tam_matriz); i++){
    for (int j = 0; j < (tam_matriz); j++){
      matriz[i][j] = matriz_aux[i * tam_matriz + j];
    }
  }

  // Imprime a matriz embaralhada
  cout << "Mapa inicial (Embaralhado):" << endl;
  for (int i = 0; i < tam_matriz; i++){
    for (int j = 0; j < tam_matriz; j++){
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl
       << endl;
}

// Percorre a vizinhança de um agente
bool percorrer(int agente, int x, int y){
  int count_diferente = 0;
  for (int i = -1; i <= 1; i++){
    for (int j = -1; j <= 1; j++){
      if (matriz[x + i][y + j] != agente && matriz[x + i][y + j] != 0){
        count_diferente++;
      }
    }
  }
  if (count_diferente > limiar){
    return true;
  }
  else{
    return false;
  }
}

// Calcula a satisfação dos agentes dentro da matriz
void satisfacao(){
  bool insatisfeito;
  int agente;

  // Percorre toda a parte interna da matriz, ignorando as primeiras e últimas linhas e colunas
  for (int i = 1; i <= tam_matriz - 2; i++){
    for (int j = 1; j <= tam_matriz - 2; j++){
      if (matriz[i][j] != 0){
        agente = matriz[i][j];
        insatisfeito = percorrer(agente, i, j);

        // Alterações caso o agente esteja insatisfeito
        if (insatisfeito == true){
          for (int k = 0; k < tam_matriz; k++){
            for (int l = 0; l < tam_matriz; l++){
              if (matriz[k][l] == 0){
                matriz[k][l] = agente;
                matriz[i][j] = 0;
                goto sair_do_loop;
              }
            }
          }
        }
        sair_do_loop:;
      }
    }
  }
}

int main()
{
  coletar();
  preencher();
  satisfacao();

  // Imprime a matriz após as alterações
  cout << "Novo mapa (Organizado):" << endl;
  for (int i = 0; i < tam_matriz; i++){
    for (int j = 0; j < tam_matriz; j++){
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
}