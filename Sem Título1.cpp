#include <iostream>
using namespace std;

int main() {
    int A, B;

    // Leitura dos valores
    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;

    // Verifica��o se s�o m�ltiplos
    if (A % B == 0 || B % A == 0) {
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}
