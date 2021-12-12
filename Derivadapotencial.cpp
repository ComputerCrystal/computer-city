//Derivada de la potencia//

#include<iostream>

using namespace std;

int main() {

	float potencia, constante, resultado1 = 0, resultado2 = 0;
	char variable;

	cout << "Digite el valor de la potencia: "; cin >> potencia;
	cout << "\nDigite la variable base: "; cin >> variable;
	cout << "\nDigite la constante: "; cin >> constante;

	switch (variable) {
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k': cout << "\nLa derivada es 0"<<endl; exit(1);
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z': break;
	default: cout << "\nLa derivada es 0"<<endl; exit(1);
	}
	//Calcula e imprime la derivada si pasó todos los filtros(restricciones)//
	resultado1 = constante * potencia;
	resultado2 = potencia - 1;
	cout << "\nLa derivada es: " << resultado1 << variable << "^" << resultado2 << endl;

	return 0;
}