#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	float numero;
	for (int i = 1; i <= 5; i++) {
		cout<<"Informe o "<<i<<"� numero:";
		cin>>numero;
		cout<<numero<<"� � "<<numero*numero;
		cout<<endl;
	}
	return 0;
}
