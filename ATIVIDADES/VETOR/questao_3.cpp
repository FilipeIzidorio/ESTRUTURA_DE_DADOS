#include <iostream>
using namespace std;

int main() {
    char vetor[10]; // Vetor para armazenar os caracteres
    int contadorConsoantes = 0;

    // Lê os 10 caracteres
    cout << "Digite 10 caracteres:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Caractere " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Verifica quantas consoantes foram lidas
    for (int i = 0; i < 10; i++) {
        char c = tolower(vetor[i]); // Converte o caractere para minúsculo
        if (c >= 'a' && c <= 'z') { // Verifica se é uma letra do alfabeto
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                contadorConsoantes++; // Incrementa o contador de consoantes
            }
        }
    }

    // Exibe o resultado
    cout << "Quantidade de consoantes lidas: " << contadorConsoantes << endl;

    return 0;
}