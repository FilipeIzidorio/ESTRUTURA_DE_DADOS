#include <iostream>
using namespace std;

int main() {
    int numero;
    long  fatorial = 1;


    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    // Verifica se o número é negativo
    if (numero < 0) {
        cout << "Erro: Fatorial de numero negativo nao e definido." << endl;
        return 1;
    }

    // Calcula o fatorial
    for (int i = 1; i <= numero; i++) {
        fatorial *= i; // Multiplica o fatorial pelo valor atual de i
    }

    // Exibe o resultado
    cout << "O fatorial de " << numero << " e: " << fatorial << endl;

    return 0;
}