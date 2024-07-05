#include <iostream>
#include <clocale>

using namespace std;

int main() {
	int inferior, superior;
	int soma = 0;
	cout<< "informe os valores a serem somados";
	cin>>inferior>>superior;
	if (inferior % 2 == 1){
		inferior++;
	}
	
	for (int i=inferior; i<=superior; i=i+2){
		soma = soma + i;
	}
	cout<<soma;
    return 0;	
}
