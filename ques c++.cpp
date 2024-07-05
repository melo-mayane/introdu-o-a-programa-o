#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicita ao usuário para fornecer um número
    cout << "Digite um número para ver sua tabuada: ";
    cin >> numero;

    // Imprime a tabuada de multiplicação
    cout << "Tabuada de multiplicação do número " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}
