#include "pessoa.hpp"
#include <stdlib.h>

string nome;
int idade;
Pessoa *raiz = NULL;

void adicionar(){

  Pessoa *novo = new Pessoa();

   cout << "Entre com o nome:" << endl;
   cin >> nome;
   novo->setNome(nome);

   cout << "Entre com idade:" << endl;
   cin >> idade;
   novo->setIdade(idade);

  if(raiz == NULL){
    raiz = novo;
  }

  else{

  raiz->addPessoa(novo);

  }


};

int main(int argc, char const *argv[]) {

  int op, qtd;

  do{

    cout << " 1 - Adicionar Pessoa\n 2 - Exibir Pre-Ordem\n 3 - Exibir em Ordem\n 4 - Exibir Pos-Ordem\n 5 - Limpar a arvore\n 6 - Sair" << endl;
    cout << "Entre com opcao:";
    cin >> op;

    system ("clear");

    switch(op){
      case 1:
      cout << "Entre com a quantidade das pessoas";
      cin >> qtd;
      for(int i=0; i< qtd; i++){
        adicionar();
          system ("clear");
      }
      break;

      case 2:
      cout << "Mostra a Pre-Ordem\n" << endl;
      raiz->mostraPreOrdem();
      break;

      case 3:
      cout << "Mostrar em ordem\n";
      raiz->mostraOrdem();
      break;

      case 4:
      cout << "Mostrar Pos-Ordem\n";
      raiz->mostraPosOrdem();
      break;

      case 5:
      cout << "Limpar a arvore\n";
      raiz->deletar();
      break;

      case 6:
      cout << "Sair";
      break;
  }

  }while(op != 6);

}
