#include <iostream>
using namespace std;

int main() {
    int N[20];

    // Leitura dos 20 valores inteiros
    for (int i = 0; i < 20; i++) {
        cin >> N[i];
    }

    // Troca dos elementos
    for (int i = 0; i < 10; i++) {
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    // Impressão do vetor modificado
    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
