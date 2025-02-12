#include <iostream>
using namespace std;

int main() {
    int N;
    int numero;
    int menor, maior, soma;


    cout << "Digite a quantidade de numeros (N): ";
    cin >> N;


    if (N <= 0) {
        cout << "Erro: N deve ser um numero positivo." << endl;
        return 1;
    }


    cout << "Digite os " << N << " numeros:" << endl;
    cin >> numero;
    menor = numero;
    maior = numero;
    soma = numero;


    for (int i = 1; i < N; i++) {
        cin >> numero;

        // Atualiza o menor valor
        if (numero < menor) {
            menor = numero;
        }

        // Atualiza o maior valor
        if (numero > maior) {
            maior = numero;
        }

        // Acumula a soma
        soma += numero;
    }

    // Exibe os resultados
    cout << "Menor valor: " << menor << endl;
    cout << "Maior valor: " << maior << endl;
    cout << "Soma dos valores: " << soma << endl;

    return 0;
}