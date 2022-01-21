#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;

int main() {

	int n_obras, opc,opc2;
	float calif_total[100], suma = 0, promedio = 0, promedio2[100];
	float ani, esart, foto, band, cala, voz, histo, persj, direc, act, dibujo,somb,clardib;
	string obras[100];

	cout << "RESE;ADOR DE MOCHI" << endl;
	cout << "\nOpcion 1:Rese;ar anime"
		"\nOpcion 2:Rese;ar dorama"
		"\nOpcion 3:Rese;ar manga"
		"\nOpcion 4:Salir" << endl;

	do {
		cout << "\nQue opcion desea elegir: "; cin >> opc;
		cout << " " << endl;
		if ((opc <= 0) || (opc >= 5)) {
			cout << "Error, opcion no disponible, intente de nuevo" << endl;
		}
	} while ((opc <= 0) || (opc >= 5));

	switch (opc){
	case 1: 
		cout << "\nCuantas obras desea rese;ar?: "<<endl; cin >> n_obras;
		cout << "\n";
		for (int i = 0; i < n_obras; i++) {
			cout << "Introduzca el nombre de las obras: "; cin >> obras[i];
		}
		for (int i = 0; i < n_obras; i++) {
			cout << "\n" << obras[i];
			cout << "\nAnimacion: "; cin >> ani;
			cout << "Estilo Artístico: "; cin >> esart;
			cout << "Fotografia: "; cin >> foto;
			cout << "Banda Sonora: "; cin >> band;
			cout << "Calidad de audio: "; cin >> cala;
			cout << "Actuacion de voz: "; cin >> voz;
			cout << "Historia: "; cin >> histo;
			cout << "Personajes: "; cin >> persj;
			cout << " " << endl;
			for (int i = 0; i <= 7; i++) {
				suma = ani+esart+foto+band+cala+voz+histo+persj;
			}
			promedio = suma / 8;
			suma = 0;
			cout.precision(2);
			promedio2[i] = promedio;
		}
		for (int i = 0; i < n_obras; i++) {
			cout << "\nObra: " << obras[i] << "\nCalificacion: " << promedio2[i] << endl;
		}
		break;
	case 2: 
		cout << "\nCuantas obras desea rese;ar?: " << endl; cin >> n_obras;
		cout << "\n";
		for (int i = 0; i < n_obras; i++) {
			cout << "Introduzca el nombre de las obras: "; cin >> obras[i];
		}
		for (int i = 0; i < n_obras; i++) {
			cout << "\n" << obras[i];
			cout << "\nDireccion: "; cin >> direc;
			cout << "Fotografia: "; cin >> foto;
			cout << "Banda Sonora: "; cin >> band;
			cout << "Calidad de audio: "; cin >> cala;
			cout << "Actuacion: "; cin >> act;
			cout << "Historia: "; cin >> histo;
			cout << "Personajes: "; cin >> persj;
			cout << " " << endl;
			for (int i = 0; i <= 6; i++) {
				suma = direc + foto + band + cala + act + histo + persj;
			}
			promedio = suma / 7;
			suma = 0;
			cout.precision(2);
			promedio2[i] = promedio;
		}
		for (int i = 0; i < n_obras; i++) {
			cout << "\nObra: " << obras[i] << "\nCalificacion: " << promedio2[i] << endl;
		}
		break;
	case 3:
		cout << "\nCuantas obras desea rese;ar?: "<<endl; cin >> n_obras;
		cout << "\n";
		for (int i = 0; i < n_obras; i++) {
			cout << "Introduzca el nombre de las obras: "; cin >> obras[i];
		}
		for (int i = 0; i < n_obras; i++) {
			cout << "\n" << obras[i];
			cout << "\nEstilo Artístico: "; cin >> esart;
			cout << "Dibujo: "; cin >> dibujo;
			cout << "Sombreado: "; cin >> somb;
			cout << "Claridad de dibujo: "; cin >> clardib;
			cout << "Historia: "; cin >> histo;
			cout << "Personajes: "; cin >> persj;
			cout << " " << endl;
			for (int i = 0; i <= 5; i++) {
				suma = esart+dibujo+somb+clardib+histo+persj;
			}
			promedio = suma / 6;
			suma = 0;
			cout.precision(2);
			promedio2[i] = promedio;
		}
		for (int i = 0; i < n_obras; i++) {
			cout << "\nObra: " << obras[i] << "\nCalificacion: " << promedio2[i] << endl;
		}
		break;
	case 4: exit(1);
	}

	_getch();
	return 0;
}