#include <iostream>

using namespace std;

struct no{
  string dado;
  no *ptr_proximo_no;
};

struct list{
  no *ptr_primeiro_no;

  void inicializar(){
    ptr_primeiro_no = NULL;
  }

  void inserir(string novo_dado){
    no *ptr_novo_no;
    ptr_novo_no = new no;

    ptr_novo_no->dado = novo_dado;

    if (ptr_primeiro_no == NULL){
      ptr_primeiro_no = ptr_novo_no;
    }
    else{
      ptr_novo_no->ptr_proximo_no = ptr_primeiro_no;
      ptr_primeiro_no = ptr_novo_no;
    }
  }

  void imprimir(){
    no *ptr_no_atual;
    ptr_no_atual = ptr_primeiro_no;

    while(ptr_no_atual != NULL){
      cout << ptr_no_atual->dado << endl;
      ptr_no_atual = ptr_no_atual->ptr_proximo_no;
    }
  }

  void excluir_primeiro_no(){
    if (ptr_primeiro_no != NULL){
      no *ptr_aux;
      ptr_aux = ptr_primeiro_no;
      ptr_primeiro_no = ptr_primeiro_no->ptr_proximo_no;
      delete ptr_aux;
    }
  }
};

int main(){
  list lista_ligada;

  lista_ligada.inicializar();
  lista_ligada.inserir("Pera");
  lista_ligada.inserir("Maca");
  lista_ligada.inserir("Uva");
  lista_ligada.inserir("Melancia");
  lista_ligada.imprimir();
  lista_ligada.excluir_primeiro_no();
  lista_ligada.imprimir();
}