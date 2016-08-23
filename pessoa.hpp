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
    string getNome(){
      return nome;
    };

    int getIdade(){
      return idade;
    };


    void setNome(string nome){
	nome = nome;
      
    };

    void setIdade(int idade ){
      idade = idade;
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
};

	

	
