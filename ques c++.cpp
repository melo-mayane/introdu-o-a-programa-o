#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicita ao usu�rio para fornecer um n�mero
    cout << "Digite um n�mero para ver sua tabuada: ";
    cin >> numero;

    // Imprime a tabuada de multiplica��o
    cout << "Tabuada de multiplica��o do n�mero " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}
