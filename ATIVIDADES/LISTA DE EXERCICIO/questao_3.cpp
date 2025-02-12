#include <iostream>
using namespace std;

int main() {
    int inicio, fim;

    // Solicita ao usuário o número inicial e final
    cout << "Digite o numero inicial: ";
    cin >> inicio;
    cout << "Digite o numero final: ";
    cin >> fim;

    // Verifica se o número inicial é maior que o final
    if (inicio > fim) {
        cout << "Erro: O numero inicial deve ser menor ou igual ao numero final." << endl;
        return 1; // Encerra o programa com código de erro
    }

    // Imprime os números pares no intervalo
    cout << "Numeros pares entre " << inicio << " e " << fim << ":" << endl;
    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) { // Verifica se o número é par
            cout << i << " ";
        }
    }
    cout << endl; // Quebra de linha após a lista de números

    return 0;
}
