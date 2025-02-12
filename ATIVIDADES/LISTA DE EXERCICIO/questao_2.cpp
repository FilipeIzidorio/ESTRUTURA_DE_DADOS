#include <iostream>
using namespace std;

int main() {
    int numeros[5];
    double soma = 0;
     double media;

    // Lendo os 5 números
    cout << "Digite 5 numeros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
        soma += numeros[i]; // Calcula a soma enquanto lê os números
    }

    // Calculando a média
    media = soma / 5;

    // Exibindo a soma e a média
    cout << "A soma dos numeros e: " << soma << endl;
    cout << "A media dos numeros e: " << media << endl;

    return 0;
}
