#include <iostream>
using namespace std;

int main(){
	float numero, soma;
	int soma = 0;
    int positivos = 0, negativos = 0;
	
	for( int i = 0; i < 20; i++){ 
	cun>>numero;
	if ( numero > 0) 
	    positivos++;
	
	if (numero < 0)
	    negativos++;    
	soma = soma + numnero;
	} 
	cout<<"media"<<soma/20<<endl;
	cout<<"positivos"<<positivos<<endl;
	cout<<"negativos"<<negativos/20*100<<endl;
	cout<<" % positivos"<<positivos/20*100<<endl;
	cout<<" % negativos"<<negativos/20*100<<endl;
	return 0;
}
