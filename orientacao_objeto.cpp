#include "veiculo.hpp"

int main(int argc, char const *argv[]) {
  string texto;
  float valor;
  int numero;

  Veiculo veiculo;
  cout << "Informe a marca do veículo:" << endl;
  cin >> texto;
  veiculo.setMarca(texto);

  cout << "Informe o modelo do veículo:" << endl;
  cin >> texto;
  veiculo.setModelo(texto);

  cout << "Informe o preço do veículo:" << endl;
  cin >> valor;
  veiculo.setPreco(valor);

  cout << "Dados do veículo: ";
  cout << veiculo.getMarca() << " - ";
  cout << veiculo.getModelo() << " - ";
  cout << veiculo.getPreco() << endl << endl;

  //Exemplo de manipulação de objetos - dinâmica + herança
  Carro *carro;
  carro  new Carro();

  cout << "Informe a marca do carro:" << endl;
  cin >> texto;
  carro->setMarca(texto);

  cout << "Informe o modelo do carro:" << endl;
  cin >> texto;
  carro->setModelo(texto);

  cout << "Informe o preco do carro:" << endl;
  cin >> texto;
  carro->setPreco(valor);

  cout << "Informe o tipo de cambio do carro:" << endl;
  cin >> texto;
  carro->setipoCambio(numero);

  cout << "Informe o numero de assento do carro:" << endl;
  cin >> texto;
  carro->setNumeroassentos(numero);

  cout << "Dados do carro: ";
  cout << carro->getMarca() << " - ";
  cout << carro->getModelo << " - ";


  return 0;
}
