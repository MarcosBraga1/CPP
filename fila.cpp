#include <iostream>

using namespace std;

struct no{
  string info;
  no * ptr_proximo_no;
};

struct fila{
  no * ptr_inicio;
  no * ptr_fim;

  void inicializar(){
    ptr_inicio = ptr_fim = NULL;
  }

  void enfileirar(string nova_info){
    no * ptr_novo_no;
    ptr_novo_no = new no;

    ptr_novo_no -> info = nova_info;
    ptr_novo_no -> ptr_proximo_no = NULL;

    //Se a fila está vazia
    if (ptr_inicio == NULL){
      ptr_inicio = ptr_fim = ptr_novo_no;
    }
    //Se a fila não está vazia
    else{
      ptr_fim -> ptr_proximo_no = ptr_novo_no;
      ptr_fim = ptr_novo_no;
    }
  }

  void desenfileirar(){
    if(ptr_inicio == NULL){
      return;
    }

    no * ptr_temp;
    ptr_temp = ptr_inicio;
    ptr_inicio = ptr_temp -> ptr_proximo_no;
    delete ptr_temp;

    //Tratar fila vazia após a remoção
    if (ptr_inicio == NULL){
      ptr_fim = NULL;
    }
  }

  void imprimir(){
    no * ptr_no_atual;
    ptr_no_atual = ptr_inicio;

    while (ptr_no_atual != NULL){
      cout << ptr_no_atual -> info << endl;
      ptr_no_atual = ptr_no_atual -> ptr_proximo_no;
    }
  }
};

int main(){
  fila minha_fila;
  minha_fila.inicializar();
  minha_fila.enfileirar("Maca");
  minha_fila.enfileirar("Banana");
  minha_fila.enfileirar("Abacaxi");
  minha_fila.enfileirar("Abacate");
  minha_fila.imprimir();
  return 0;
}