#include <iostream>
using namespace std;

int main() {
    int intervalo_inferior, intervalo_superior;
    int soma_impares = 0;

    // Solicita ao usuário para fornecer os intervalos
    cout << "Digite o intervalo inferior: ";
    cin >> intervalo_inferior;
    cout << "Digite o intervalo superior: ";
    cin >> intervalo_superior;

    // Verifica e calcula a soma dos números ímpares dentro do intervalo
    for (int i = intervalo_inferior; i <= intervalo_superior; ++i) {
        if (i % 2 != 0) {  // Verifica se o número é ímpar
            soma_impares += i;
        }
    }

    // Imprime a soma dos números ímpares
    cout << "A soma dos números ímpares no intervalo [" << intervalo_inferior << ", " << intervalo_superior << "] é: " << soma_impares << endl;

    return 0;
}
