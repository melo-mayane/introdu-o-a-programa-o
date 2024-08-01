#include <iostream>
#include <string>

using namespace std;

int main() {
    // Array com os nomes dos meses em ingl�s
    string months[] = {"January", "February", "March", "April", "May", "June", 
                       "July", "August", "September", "October", "November", "December"};
    
    int number;
    cin >> number;  // L� o n�mero do m�s

    // Verifica se o n�mero est� dentro do intervalo v�lido (1 a 12)
    if (number < 1 || number > 12) {
        cout << "N�mero inv�lido! Deve ser entre 1 e 12." << endl;
        return 0;  // Encerra o programa
    }

    // O n�mero do m�s � usado como �ndice para acessar o array de meses
    string monthName = months[number - 1];  // -1 porque o array em C++ � baseado em zero

    // Imprime o nome do m�s com a primeira letra mai�scula
    cout << monthName << endl;

    return 0;
}
