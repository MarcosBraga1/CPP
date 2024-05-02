#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

//Tabela que contem 10 padrões diferentes de rostos
double rostos[4][10] = {
    { 1, -1, -1,  1, -1,  1,  1, -1, -1,  1},
    { 1, -1, -1, -1,  1, -1,  1, -1,  1,  1},
    { 1,  1, -1, -1, -1,  1,  1, -1,  1, -1},
    {-1, -1, -1,  1, -1,  1,  1,  1, -1,  1}};
double memoria[4][4];
double entrada[4];
double aux[4];
double cossenoNumerador = 0;
double cossenoDenominador1 = 0;
double cossenoDenominador2 = 0;
double qualidade = 0;

//Memoriza uma tabela de 10 rostos
void aprender(){
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      memoria[i][j] = 0;
      for (int k = 0; k < 10; k++){
        memoria[i][j] += rostos[i][k] * rostos[j][k];
      }
    }
  }
}

//Insere um padrão de rosto e gera uma lembrança
void verificar(){
  for (int i = 0; i < 4; i++){
    cout << "Insira a " << i + 1 << " caracteristica: ";
    cin >> entrada[i];
  }

  for (int i = 0; i < 4; i++){
    aux[i] = 0;
    for (int j = 0; j < 4; j++){
      aux[i] += memoria[i][j] * entrada[j];
    }
  }
}

//Verifica a qualidade da lembrança para saber se o padrão inserido está na memória
void qualidade_amostra(){
  for (int i = 0; i < 4; i++){
    cossenoDenominador2 += entrada[i] * entrada[i];
    cossenoDenominador1 += aux[i] * aux[i];
    cossenoNumerador += entrada[i] * aux[i];
  }
  cossenoDenominador2 = sqrt(cossenoDenominador2);
  cossenoDenominador1 = sqrt(cossenoDenominador1);
  qualidade = cossenoNumerador / (cossenoDenominador1 * cossenoDenominador2);
  cout << "A amostra inserida possui uma qualidade de: " << fixed << setprecision(2) << qualidade * 100 << "%" << endl;
}

int main()
{
  aprender();
  verificar();
  qualidade_amostra();
  
  return 0;
}