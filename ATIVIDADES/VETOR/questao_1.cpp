#include <iostream>
using namespace std;

int main() {

  int vetor[10];

 cout <<"Digite 10 numeros inteiros: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": " << endl;
        cin >> vetor[i];
    }
    cout << "Numeros na ordem inversa: "<< endl;
    for (int i = 9; i >=0; i--) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
