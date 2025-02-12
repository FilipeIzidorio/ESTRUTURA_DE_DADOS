#include <iostream>
using namespace std;


int main() {
    int numero;

    // Solicita ao usuário um número
    cout << "Digite um numero para ver sua tabuada: ";
    cin >> numero;

    // Imprime a tabuada do número
    cout << "Tabuada do " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}