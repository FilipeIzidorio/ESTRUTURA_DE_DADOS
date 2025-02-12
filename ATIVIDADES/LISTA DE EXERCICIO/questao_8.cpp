#include <iostream>
using namespace std;

int main() {
    int numero;
    int somaPares = 0; // Soma dos números pares
    int somaImpares = 0; // Soma dos números ímpares

    cout << "Digite numeros inteiros positivos (digite um numero maior que 1000 para parar):" << endl;

    while (true) {
        cout << "Numero: ";
        cin >> numero;

        // Verifica se o número é maior que 1000
        if (numero > 1000) {
            break; // Sai do loop
        }

        // Verifica se o número é positivo
        if (numero < 0) {
            cout << "Erro: Numero negativo nao e permitido. Tente novamente." << endl;
            continue; // Volta ao início do loop
        }

        // Verifica se o número é par ou ímpar e acumula a soma
        if (numero % 2 == 0) {
            somaPares += numero; // Soma dos pares
        } else {
            somaImpares += numero; // Soma dos ímpares
        }
    }

    // Exibe os resultados
    cout << "Soma dos numeros pares: " << somaPares << endl;
    cout << "Soma dos numeros impares: " << somaImpares << endl;

    return 0;
}