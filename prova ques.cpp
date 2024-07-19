#include <iostream>
#include <locale>

using namespace std;

int main () {
	int TemperaturaCelsius, TemperaturaFahrenheit;
	
	cout<< "Digite a temepratura em graus celsius"<< endl;
	cin>> TemperaturaCelsius;
	
	TemperaturaFahrenheit = (TemperaturaCelsius * 9/5) + 32;
	
	cout<<"temperatura em fahrenheit é:"<< TemperaturaFahrenheit<< "°F" << endl;
	
return 0;	
}

