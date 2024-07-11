#include <iostream>
#include <clocale>

using namespace std;

int main () {
    int valor1, valor2;
    
    cout<< "digite o primeiro valor";
    cin >> valor1;
    
    cout<< "digite o segundo valor";
    cin >> valor2;
    
    int temp = valor1;
    valor1 = valor2;
    valor2 = temp;
    
    cout<< "\nDepois da troca: \n";
    cout<< "primeiro valor: " << valor1 << endl;
    cout<< "segundo valor: "  << valor2 << endl;
 
 return 0;   
}
    
