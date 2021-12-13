//Primera ley de la termodinámica/conservación de la energía//

#include<iostream>
#include<cstring>

using namespace std;

int main() {

	float VI, Q, W;
	string proceso;

	cout << "Primera ley de la termodinámica o ley de la conservación de la energía";
	cout << "\nLa energía no se crea ni se destruye, solo se transfroma" << endl;
	cout << "Los procesos son los siguientes:"
		"\n1.- Normal"
		"\n2.- Adiabático"
		"\n3.- Isocórico"
		"\n4.- Isotérmico";
	cout << "\nQue proceso desea calcular?: "; cin >> proceso;
	 if ((proceso == "Normal")||(proceso == "normal")) {
		cout << "\nDigite el valor del calor(+ si absorbe o - si cede) en calorias: "; cin >> Q;
		cout << "Digite el valor del trabajo termódinamico(+si realiza o - si le realizan): "; cin >> W;
		if ((Q == 0)||(W == 0)) {
			cout << "Error, datos insuficientes" << endl;
			exit(1);
		}
		else {
			VI = Q - W;
			cout << "\nEl cambio en la energía interna es: " << VI << endl;
		}
	}
	else if ((proceso == "Adiabatico")||(proceso == "adiabatico")) {
		cout << "El sistema no recibe o cede calor (Q=0)";
		cout << "\nDigite el valor del trabajo termodinámico: "; cin >> W;
		VI = -W;
		W = VI;
		cout << "\nEl cambio en la energía interna es de: " << VI << endl;
		cout << "\nEl valor del trabajo termodinámico es de: " << W << endl;
	}
	else if ((proceso == "Isocorico")||(proceso == "isocorico")) {
		cout << "\nEl volumen del sistema es constante (W=0)";
		cout << "\nDigite el valor del calor: "; cin >> Q;
		VI = Q;
		cout << "\nEl cambio en la energía interna es de: " << VI << endl;
		cout << "\nEl valor del calor es de: " << Q << endl;
	}
	else if ((proceso == "Isotermico")||(proceso == "isotermico")) {
		cout << "\nLa temperatura permanece constante (ΔU)";
		cout << "\nDigite el valor del calor: "; cin >> Q;
		W = Q;
		cout << "\nEl valor del trabajo termodinámico es: " << W << endl;
		cout << "\nEl valor del calor es: " << Q << endl;
	}
	else {
		cout << "\nERROR, PROCESO NO IDENTIFICADO" << endl;
	}

	return 0;
}
