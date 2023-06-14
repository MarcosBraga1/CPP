#include <iostream>

using namespace std;

int main()
{
  float nota1 = 0.0f; 
  float nota2 = 0.0f; 
  float nota3 = 0.0f; 
  float me = 0.0f;

  cout << "Insira o valor da primeira nota: "; 
  cin >> nota1;
  cout << "Insira o valor da segunda nota: "; 
  cin >> nota2;
  cout << "Insira o valor da terceira nota: "; 
  cin >> nota3;
  cout << "Insira o valor da nota da media de excercicios: "; 
  cin >> me;

  float ma = (nota1 + (nota2 * 2) + (nota3 * 3) + me) / 7;

  cout << "Valor da primeira nota: " << nota1 << "\n";
  cout << "Valor da segunda nota: " << nota2 << "\n";
  cout << "Valor da terceira nota: " << nota3 << "\n";
  cout << "Valor da media dos excercicios: " << me << "\n";
  cout << "Valor da media de aproveitamento: " << ma << "\n";

  if (ma >= 9.0){
    cout << "Conceito correspondente: A. Aprovado!";
  } 
  else if (ma >= 7.5 && ma < 9.0){
    cout << "Conceito correspondente: B. Aprovado!";
  }
  else if (ma >= 6.0 && ma < 7.5){
    cout << "Conceito correspondente: C. Aprovado!";
  }
  else if (ma >= 4.0 && ma < 6.0){
    cout << "Conceito correspondente: D. Reprovado!";
  }
  else if (ma < 4.0){
    cout << "Conceito correspondente: E. Reprovado!";
  }
  
  system("pause");
  return 0;
  }