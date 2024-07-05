#include <iostream>
using namespace std;

int main() {
    int intervalo_inferior, intervalo_superior;
    int soma_impares = 0;

    // Solicita ao usu�rio para fornecer os intervalos
    cout << "Digite o intervalo inferior: ";
    cin >> intervalo_inferior;
    cout << "Digite o intervalo superior: ";
    cin >> intervalo_superior;

    // Verifica e calcula a soma dos n�meros �mpares dentro do intervalo
    for (int i = intervalo_inferior; i <= intervalo_superior; ++i) {
        if (i % 2 != 0) {  // Verifica se o n�mero � �mpar
            soma_impares += i;
        }
    }

    // Imprime a soma dos n�meros �mpares
    cout << "A soma dos n�meros �mpares no intervalo [" << intervalo_inferior << ", " << intervalo_superior << "] �: " << soma_impares << endl;

    return 0;
}
