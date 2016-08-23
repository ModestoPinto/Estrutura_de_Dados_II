#include "pessoa.hpp"

int main(int argc, char const *argv[]) {


  string nome;
  int idade;
  Pessoa *raiz = NULL;
  for(int i=0; i<= 4; i++){

    Pessoa *novo = new Pessoa();

   cout << "Entre com o nome:" << endl;
   cin >> nome;
   novo->setNome(nome);

   cout << "Entre com idade:" << endl;
   cin >> idade;
   novo->setIdade(idade);



if(raiz == NULL){
	raiz = novo;
}else{
raiz->addPessoa(novo);
}
  };

};

