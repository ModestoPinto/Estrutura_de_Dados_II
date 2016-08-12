#include <iostream>
#include <string>

using namespace std;

class Veiculo{
protected:
  string marca;
  string modelo;
  float preco;

private:
  int teste;

public:
  Veiculo(){
    marca = "";
    modelo = "";
    preco = 0.0;
  }

  Veiculo(string mc, string md, float pr){
    marca = mc;
    modelo = md;
    preco = pr;
  }

  ~Veiculo(){
    cout << "Deletando instância de Veículo: " << endl;
  }

  string getMarca(){
    return marca;
  }

  void setMarca(string mc){
    marca = mc;
  }

  string getModelo(){
    return modelo;
  }

  void setModelo(string md){
    modelo = md;
  }

  float getPreco(){
    return preco;
  }

  void setPreco(float pr){
    preco = pr;
  }

  int getTeste(){
    return teste;
  }

  void setTeste(int ts){
    teste = ts;
  }

  bool andarVeiculo(int velocidade){
    return true;
  }
};

// Modela a classe carro, que herda as características de veiculo
class Carro:public Veiculo{
//Atributo da classe
  private:
    int tipoCambio;
    int numeroAssento;

    // Métodos de classe
  public:

    // Construtor
    Carro(){

    };

    //Construtor com parâmetros - polimorfismo do tipo sobrecarga
    Carro (string mc, string md, float pr, int tc, int na){
      marca = mc;
      modelo = md;
      preco = pr;
      tipoCambio = tc;
      numeroAssento = na;
    }

    //Método destrutor
    ~Carro(){

    };

    int getTipoCambio(){
      return tipoCambio;
    };

    void setTipoCambio( int tc){
      tipoCambio = tc;
    };

    int getNumeroassentos(){
      return numeroAssento;
    };

    void setNumeroAssentos( int na){
      numeroAssento = na;
    };

}
