#include <iostream>
using namespace std;

int main() {
    int N;

    // Solicita ao usuário a quantidade de números
    cout << "Digite a quantidade de numeros (N): ";
    cin >> N;

    // Verifica se N é válido
    if (N <= 0) {
        cout << "Erro: N deve ser um número positivo." << endl;
        return 1; // Encerra o programa com código de erro
    }

    // Lê os N números e verifica se são primos
    for (int i = 0; i < N; i++) {
        int numero;
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numero;

        bool ehPrimo = true; // Assume que o número é primo inicialmente

        // Verifica se o número é primo
        if (numero <= 1) {
            ehPrimo = false; // Números menores ou iguais a 1 não são primos
        } else {
            for (int j = 2; j * j <= numero; j++) { // Verifica divisores até a raiz quadrada do número
                if (numero % j == 0) {
                    ehPrimo = false; // Se encontrar um divisor, não é primo
                    break; // Sai do loop
                }
            }
        }

        // Exibe o resultado
        if (ehPrimo) {
            cout << numero << " e primo." << endl;
        } else {
            cout << numero << " nao e primo." << endl;
        }
    }

    return 0;
}