#include <iostream>

using namespace std;

struct no {
  int info;
  no *ptr_proximo_no;
};

struct pilha {
  no *ptr_topo;

  void inicializar(){
    ptr_topo = NULL;
  }

  void empilhar(int nova_info) {
    no *ptr_novo_no;
    ptr_novo_no = new no;
    
    ptr_novo_no->info = nova_info;
    ptr_novo_no->ptr_proximo_no = NULL;

    if (ptr_topo == NULL) {
      ptr_topo = ptr_novo_no;
    } else {
      // Ligando o próximo do novo nó ao antigo topo
      ptr_novo_no->ptr_proximo_no = ptr_topo;
      // Atualizando o no que ficará no topo
      ptr_topo = ptr_novo_no;
    }
  }

  void desempilhar() {
    if (ptr_topo == NULL) {
      return;
    }

    no *ptr_temp;
    ptr_temp = ptr_topo;

    ptr_topo = ptr_temp->ptr_proximo_no;
    delete ptr_temp;
  }

  void imprimir() {
    no *ptr_no_atual;
    ptr_no_atual = ptr_topo;

    while (ptr_no_atual != NULL) {
      cout << ptr_no_atual->info << endl;
      ptr_no_atual = ptr_no_atual->ptr_proximo_no;
    }
  }
};

int main() {
  pilha minha_pilha;
  minha_pilha.inicializar();
  minha_pilha.empilhar(45);
  minha_pilha.empilhar(32);
  minha_pilha.empilhar(84);
  minha_pilha.desempilhar();
  minha_pilha.imprimir();
}