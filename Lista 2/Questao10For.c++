/*Foi realizada uma pesquisa de algumas características físicas da população de
um certa região. Foram entrevistadas 500 pessoas e coletados os seguintes dados:
a- sexo: M (masculino) e F (feminino)
b- cor dos olhos: A (azuis), V (verdes) e C (castanhos)
c- cor dos cabelos: L (louros), C (castanhos) e P (pretos)
d- idade
Deseja-se saber:
A quantidade de indivíduos do sexo feminino, cuja idade está entre 18 e 35 anos
e que tenham olhos verdes e cabelos louros.*/
#include <iostream>

using namespace std;

int main ()
{
  char sexo[500];
  char olho[500];
  char cabelo[500];
  int idade[500];
  int aux = 0;

  for (int i = 0; i < 500; i++){
    cout << "Sexo:\nM - Masculino.\nF - Feminino." << endl;
    cin >> sexo[i];

    cout << "Cor dos olhos:\nA - Azul.\nV - Verde.\nC - Castanho." << endl;
    cin >> olho[i];

    cout << "Cor do cabelo:\nL - Loiro.\nC - Castanho.\nP - Preto." << endl;
    cin >> cabelo[i];

    cout << "A idade: " << endl;
    cin >> idade[i];

    if (sexo[i] == 'F' && olho[i] == 'V' && cabelo[i] == 'L' && idade[i] > 17 && idade[i] <36)
    {
      aux++;
    }
  }

  cout << "A quantidade de individuos do sexo feminino, cuja idade esta entre";
  cout << " 18 e 35 anos e que tenham olhos verdes e cabelos louros, e: " << aux << endl;

  system("pause");
  return 0;
}