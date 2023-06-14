//Algoritmo que calcula a área de um retângulo.
#include <iostream>

using namespace std;

int main()
{
  float b = 0.0f;
  float h = 0.0f;
  cout << "Qual o tamanho da base do retangulo: "; 
  cin >> b;
  cout << "Qual o tamanho da altura do retangulo: ";
  cin >> h;
  float area = b * h;
  cout << "A area do retangulo e: " << area;

  system("pause");
  return 0;
}
