#include <iostream>
#include <string>

using namespace std;

class Pessoa{

  protected:
    string nome;
    int idade;
    Pessoa *dir;
    Pessoa *esq;

  public:
    //Construtor
    Pessoa(){
      nome = "";
      idade = 0;
      dir = NULL;
      esq = NULL;
    };

    Pessoa (string nm, int id){
      nome = nm;
      idade = id;
      dir = NULL;
      esq = NULL;
      };

      ~Pessoa(){
        cout << "Apagando " << nome << endl;

      };

    string getNome(){
      return nome;
    };

    int getIdade(){
      return idade;
    };

    void setNome(string nm){
	     nome = nm;

    };

    void setIdade(int id ){
      idade = id;
    };

    void addPessoa(Pessoa *novo){
      if(novo->idade>=this->idade){ // add à direia.
          if(this->dir == NULL){
            this->dir = novo;

          }else{
            this->dir->addPessoa(novo);
           }

      }else { // add à esqueda.

	if(this->esq == NULL){
            this->esq = novo;

          }else{
            this->esq->addPessoa(novo);
           }
       }


   };

   void mostraPreOrdem(){

     cout << " idade: " << this->getIdade() << endl;

     if(this->esq != NULL){
       this->esq->mostraPreOrdem();
     }

     if(this->dir != NULL){
       this->dir->mostraPreOrdem();
     }
   };

   void mostraOrdem(){

     if(this->esq != NULL){
       this->esq->mostraOrdem();
   }

   cout << "idade: " << this->getIdade() << endl;

   if(this->dir != NULL){
     this->dir->mostraOrdem();
   }
 };

 void mostraPosOrdem(){

   if(this->esq != NULL){
     this->esq->mostraPosOrdem();
   }

   if(this->dir != NULL){
     this->dir->mostraPosOrdem();

     }

     cout << "idade:" << this->getIdade() << endl;
 };
void deletar(){

  if(this->esq != NULL){
    this->esq->deletar();
  }

  if(this->dir != NULL){
    this->dir->deletar();

    }
    delete this;
};

};
