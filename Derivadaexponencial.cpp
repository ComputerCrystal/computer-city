//Derivada de una función con potencia//

#include<iostream>
#include<cstring>

using namespace std;

int main() {

	string letra[] = { "a","b","c","d","e","f","g","h","i","j","k" };
	string letra2[] = { "l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
	float potencia, constante, resultado1 = 0, resultado2 = 0, resultado3 = 0;
	string variable;
	int count;

	cout << "Digite el valor de la potencia: "; cin >> potencia;
	cout << "\nDigite la variable base: "; cin >> variable;
	cout << "\nDigite la constante: "; cin >> constante;
	//Checar si el input del usuario es un número o un string//
	for (int i = 0; i < variable.length(); i++) {
		if (isdigit(variable[i]) == false) { //isdigit checa si un caracter es una unidad decimal//
			count = 1;
			break;
		}
		else {
			count = 0;
		}
	}
	//Si es un número, la derivada es 0, si no será una letra y el programa seguirá//
	if (count == 0) {
		cout << "\nLa derivada es 0"<<endl;
		exit(1);
	}
	for (int i = 0; i < 11; i++) {
		//cout << letra[i];
		if (variable == letra[i]) {
			cout << "\nLa derivada es 0" << endl;
			exit(1);
		}
	}
	for (int i = 0; i < 14; i++) {
		if (variable == letra2[i]) {
			break;
		}
	}
	//Calcula e imprime la derivada si pasó todos los filtros(restricciones)//
	resultado1 = constante * potencia;
	resultado2 = potencia - 1;
	cout << "\nLa derivada es: " << resultado1 << variable << "^" << resultado2 << endl;

	return 0;
}
