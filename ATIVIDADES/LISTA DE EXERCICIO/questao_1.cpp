#include <iostream>
using namespace std;

int main() {
    int numeros[5];
    int maior;

    // Lendo os 5 números
    cout << "Digite 5 numeros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }


    maior = numeros[0];

    // Encontrando o maior número
    for (int i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    // Exibindo o maior número
    cout << "O maior numero e: " << maior << endl;

    return 0;
}