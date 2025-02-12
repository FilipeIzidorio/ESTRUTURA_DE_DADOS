#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Digite o valor de N (N-ésimo termo da série de Fibonacci): ";
    cin >> N;

    // Verifica se N é válido
    if (N <= 0) {
        cout << "Erro: N deve ser um número positivo." << endl;
        return 1; // Encerra o programa com código de erro
    }

    // Casos base da série de Fibonacci
    if (N == 1 || N == 2) {
        cout << "O " << N << "º termo da série de Fibonacci é: 1" << endl;
        return 0;
    }

    // Cálculo do N-ésimo termo
    int anterior = 1; // F(n-2)
    int atual = 1;    // F(n-1)
    int proximo;

    for (int i = 3; i <= N; i++) {
        proximo = anterior + atual; // F(n) = F(n-1) + F(n-2)
        anterior = atual;          // Atualiza F(n-2)
        atual = proximo;           // Atualiza F(n-1)
    }

    // Exibe o resultado
    cout << "O " << N << "º termo da série de Fibonacci é: " << atual << endl;

    return 0;
}