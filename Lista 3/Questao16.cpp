/*Escreva um trecho de código para fazer a criação dos novos tipos de dados
conforme solicitado abaixo:
• Horário: composto de hora, minutos e segundos.
• Data: composto de dia, mês e ano.
• Compromisso: composto de uma data, horário e texto que descreve o compromisso.*/
#include <iostream>

using namespace std;

struct horario
{
  int hora = 0;
  int min = 0;
  int sec = 0;
};

struct data
{
  int dia = 0;
  int mes = 0;
  int ano = 0;
};

struct compromisso
{
  horario hora;
  data dt;
  string compro;
};

int main()
{
  compromisso agenda = {{22, 0, 0}, {12, 7, 23}, "Fazer compras no mercado"};
}