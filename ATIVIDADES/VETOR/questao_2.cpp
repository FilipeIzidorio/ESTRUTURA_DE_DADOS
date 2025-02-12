#include <iostream>
using namespace std;

int main() {
    int vetor[5];
    double soma = 0;
    double subtracao;
    double divisao;
    cout << "Digite os 5 numeros inteiros: "<< endl;
    for (int i = 0; i < 5; i++) {
      cout << "numero:"<<i +1<< " " <<endl;
      cin >> vetor[i];
    }
    for (int i = 0; i < 5; i++) {
      soma += vetor[i];
    }
    subtracao = vetor[0];
    for (int i = 1; i < 5; i++) {
      subtracao -= vetor[i];
    }

    divisao = vetor[0];
    for (int i = 1; i < 5; i++) {
      if ( vetor[i] != 0){
        divisao /= vetor[i];
      } else{
        cout <<"Divisao por zero nao existe"<<endl;
        return 1;
      }
    }
  cout << "Soma dos numeros: " << soma << endl;
  cout << "Subtracao dos numeros: " << subtracao << endl;
  cout << "Divisao dos numeros: " << divisao << endl;


    return 0;
}
