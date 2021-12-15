//Traducir tu nombre a kaktakana//

#include<iostream>
#include<cstring>

using namespace std;

int main() {

	float porcentaje, masa_solucion, masa_soluto, masa_molecular, volumen, Molaridad, Normalidad, molalidad, n_moles, peso_equivalente,
		volumen_soluto,volumen_solucion;
	string unidad, unidad2, variable;
	string tipo, unidad_q;

	cout << "Que tipo de unidad desea calcular: "; cin >> tipo;

	if ((tipo == "Quimicas") || (tipo == "quimicas") || (tipo == "quimica")) {
		cout << "\nLas unidades son las siguientes:"
			"\nMolaridad"
			"\nMolalidad"
			"\nNormalidad" << endl;
		cout << "\nQue unidad química desea calcular? "; cin >> unidad_q;

		if ((unidad_q == "Molaridad") || (unidad_q == "molaridad")) {

			cout << "\nLas variables son las siguientes:"
				"\nM(Molaridad)"
				"\nn(Cantidad de sustancia o número de moles de soluto)"
				"\nV(volumen";
			cout << "\nQue variable desea conocer: "; cin >> variable;

			if (variable == "M") {

				cout << "\nDigite el valor de la masa del soluto y su unidad: "; cin >> masa_soluto >> unidad;
				if (unidad == "kg") {
					masa_soluto *= 1000;
				}
				else if (unidad == "gr") {
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}

				cout << "\nDigite el valor de la masa o peso molecular: "; cin >> masa_molecular;
				cout << "\nDigite el valor del volumen y su unidad: "; cin >> volumen >> unidad2;
				if (unidad2 == "l") {
				}
				else if (unidad2 == "ml") {
					volumen /= 1000;
				}
				else if (unidad2 == "kg") {
				}
				else if (unidad2 == "gr") {
					volumen /= 1000;
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}

				//Calcular la cantidad de sustancia y molaridad"
				n_moles = masa_soluto / masa_molecular;
				Molaridad = n_moles / volumen;
				cout << "\nEl valor de la Molaridad es: " << Molaridad << "mol/l";
			}
			if (variable == "n") {
				cout << "\nDigite el valor de la molaridad: "; cin >> Molaridad;
				cout << "\nDigite el valor del volumen y su unidad: "; cin >> volumen >> unidad2;
				if (unidad2 == "l") {
				}
				else if (unidad2 == "ml") {
					volumen /= 1000;
				}
				else if (unidad2 == "kg") {
				}
				else if (unidad2 == "gr") {
					volumen /= 1000;
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}
				n_moles = Molaridad * volumen;
				cout << "\nEl valor de la cantidad de sustancia es: " << n_moles << "mol"<<endl;
			}
			if (variable == "V") {
				cout << "\nDigite el valor de la molaridad: "; cin >> Molaridad;
				cout << "\nDigite el valor de la masa del soluto y su unidad: "; cin >> masa_soluto >> unidad;
				if (unidad == "kg") {
					masa_soluto *= 1000;
				}
				else if (unidad == "gr") {
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}
				cout << "\nDigite el valor de la masa o peso molecular: "; cin >> masa_molecular;

				n_moles = masa_soluto / masa_molecular;
				volumen = n_moles / Molaridad;
				cout << "\nEl volumen vale: " << volumen << "l" << endl;
		}
	}
	else if ((unidad_q == "Molalidad") || (unidad_q == "molalidad")) {

			cout << "\nLas variables son las siguientes:"
				"\nm(molalidad)"
				"\nn(Cantidad de sustancia o número de moles de soluto)"
				"\nV(volumen";
			cout << "\nQue variable desea conocer: "; cin >> variable;

			if (variable == "m") {

				cout << "\nDigite el valor de la masa del soluto y su unidad: "; cin >> masa_soluto >> unidad;
				if (unidad == "kg") {
					masa_soluto *= 1000;
				}
				else if (unidad == "gr") {
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}

				cout << "\nDigite el valor de la masa o peso molecular: "; cin >> masa_molecular;
				cout << "\nDigite el valor del volumen y su unidad: "; cin >> volumen >> unidad2;
				if (unidad2 == "l") {
				}
				else if (unidad2 == "ml") {
					volumen /= 1000;
				}
				else if (unidad2 == "kg") {
				}
				else if (unidad2 == "gr") {
					volumen /= 1000;
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}

				//Calcular la cantidad de sustancia y molaridad"
				n_moles = masa_soluto / masa_molecular;
				molalidad = n_moles / volumen;
				cout << "\nEl valor de la molalidad es: " << molalidad << "mol/kg";
			}
			if (variable == "n") {
				cout << "\nDigite el valor de la molalidad: "; cin >> molalidad;
				cout << "\nDigite el valor del volumen y su unidad: "; cin >> volumen >> unidad2;
				if (unidad2 == "l") {
				}
				else if (unidad2 == "ml") {
					volumen /= 1000;
				}
				else if (unidad2 == "kg") {
				}
				else if (unidad2 == "gr") {
					volumen /= 1000;
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}
				n_moles = molalidad * volumen;
				cout << "\nEl valor de la cantidad de sustancia es: " << n_moles << "mol" << endl;
			}
			if (variable == "V") {
				cout << "\nDigite el valor de la molalidad: "; cin >> molalidad;
				cout << "\nDigite el valor de la masa del soluto y su unidad: "; cin >> masa_soluto >> unidad;
				if (unidad == "kg") {
					masa_soluto *= 1000;
				}
				else if (unidad == "gr") {
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}
				cout << "\nDigite el valor de la masa o peso molecular: "; cin >> masa_molecular;

				n_moles = masa_soluto / masa_molecular;
				volumen = n_moles / molalidad;
				cout << "\nEl volumen vale: " << volumen << "kg" << endl;
			}
	}
	else if ((unidad_q == "Normalidad") || (unidad_q == "normalidad")) {

	cout << "\nLas variables son las siguientes:"
		"\nN(Normalidad)"
		"\nn(No. equivalente de gramos de soluto)"
		"\nV(volumen";
	cout << "\nQue variable desea conocer: "; cin >> variable;

	if (variable == "N") {

		cout << "\nDigite el valor de la masa del soluto y su unidad: "; cin >> masa_soluto >> unidad;
		if (unidad == "kg") {
			masa_soluto *= 1000;
		}
		else if (unidad == "gr") {
		}
		else {
			cout << "\nError, unidad desconocida" << endl; exit(1);
		}

		cout << "\nDigite el valor del peso equivalente: "; cin >> peso_equivalente;
		cout << "\nDigite el valor del volumen y su unidad: "; cin >> volumen >> unidad2;
		if (unidad2 == "l") {
		}
		else if (unidad2 == "ml") {
			volumen /= 1000;
		}
		else if (unidad2 == "kg") {
		}
		else if (unidad2 == "gr") {
			volumen /= 1000;
		}
		else {
			cout << "\nError, unidad desconocida" << endl; exit(1);
		}

		//Calcular la cantidad de sustancia y molaridad"
		n_moles = masa_soluto / peso_equivalente;
		Normalidad = n_moles / volumen;
		cout << "\nEl valor de la Normalidad es: " << Normalidad << "eq/l";
	}
	if (variable == "n") {
		cout << "\nDigite el valor de la Normalidad: "; cin >> Normalidad;
		cout << "\nDigite el valor del volumen y su unidad: "; cin >> volumen >> unidad2;
		if (unidad2 == "l") {
		}
		else if (unidad2 == "ml") {
			volumen /= 1000;
		}
		else if (unidad2 == "kg") {
		}
		else if (unidad2 == "gr") {
			volumen /= 1000;
		}
		else {
			cout << "\nError, unidad desconocida" << endl; exit(1);
		}
		n_moles = Normalidad * volumen;
		cout << "\nEl valor de la cantidad de sustancia es: " << n_moles << "eq" << endl;
	}
	if (variable == "V") {
		cout << "\nDigite el valor de la Normalidad: "; cin >> Normalidad;
		cout << "\nDigite el valor de la masa del soluto y su unidad: "; cin >> masa_soluto >> unidad;
		if (unidad == "kg") {
			masa_soluto *= 1000;
		}
		else if (unidad == "gr") {
		}
		else {
			cout << "\nError, unidad desconocida" << endl; exit(1);
		}
		cout << "\nDigite el valor del peso equivalente: "; cin >> peso_equivalente;

		n_moles = masa_soluto / peso_equivalente;
		volumen = n_moles / Normalidad;
		cout << "\nEl volumen vale: " << volumen << "l" << endl;
	}
	}
	else {
		cout << "\nError, unidad desconocida" << endl;
		exit(1);
	}
}
	else if ((tipo == "Fisicas") || (tipo == "fisicas") || (tipo == "fisica")) {
		cout << "\nLas unidades son las siguientes:"
			"\n%masa/masa ó peso/peso"
			"\n%masa/volumen ó peso/volumen"
			"\n%volumen/volumen" << endl;
		cout << "\nQue unidad física desea calcular? "; cin >> unidad_q;
		if ((unidad_q == "masa/masa") || (unidad_q == "peso/peso")) {
			cout << "\nLas variables son las siguientes:"
				"\n%m/m ó p/p(concentración)"
				"\nm(Masa del soluto)"
				"\nM(Masa de la solución)" << endl;
			cout << "\nQue variable desea conocer: "; cin >> variable;
			if ((variable == "m/m")||(variable == "p/p")) {
				cout << "Digite la masa del soluto y su unidad: "; cin >> masa_soluto >> unidad;
				if (unidad == "kg") {
					masa_soluto *= 1000;
				}
				else if (unidad == "gr") {
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}
				cout << "Digite la masa de la solución y su unidad: "; cin >> masa_solucion >> unidad2;
				if (unidad2 == "kg") {
					masa_solucion *= 1000;
				}
				else if (unidad2 == "gr") {
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}
				porcentaje = (masa_soluto / masa_solucion) * 100;
				cout << "El porcentaje de concentración m/m es " << porcentaje << "%m/m"<<endl;
			}
			else if (variable == "m") {
				cout << "Digite el porcentaje de concentración m/m: "; cin >> porcentaje;
				cout << "Digite la masa de la solución y su unidad: "; cin >> masa_solucion >> unidad;
				if (unidad == "kg") {
					masa_solucion *= 1000;
				}
				else if (unidad == "gr") {
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}
				masa_soluto = (porcentaje*masa_solucion)/100;
				cout << "La masa del soluto es " << masa_soluto << "gr" << endl;
			}
			else if (variable == "M") {
				cout << "Digite el porcentaje de concentración m/m: "; cin >> porcentaje;
				cout << "Digite la masa del soluto y su unidad: "; cin >> masa_soluto >> unidad;
				if (unidad == "kg") {
					masa_soluto *= 1000;
				}
				else if (unidad == "gr") {
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}
				masa_solucion = (masa_soluto/porcentaje)*100;
				cout << "La masa del soluto es " << masa_solucion << "gr" << endl;
			}
			else {
				cout << "\nError, variable desconocida" << endl;
				exit(1);
			}
		}
		else if ((unidad_q == "masa/volumen") || (unidad_q == "peso/volumen")) {
			cout << "\nLas variables son las siguientes:"
				"\n%m/v ó p/v(concentración)"
				"\nm(Masa del soluto)"
				"\nV(Volumen de la solución)" << endl;
			cout << "\nQue variable desea conocer: "; cin >> variable;
			if ((variable == "m/v") || (variable == "p/v")) {
				cout << "Digite la masa del soluto y su unidad: "; cin >> masa_soluto >> unidad;
				if (unidad == "kg") {
					masa_soluto *= 1000;
				}
				else if (unidad == "gr") {
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}
				cout << "Digite el volumen de la solución y su unidad: "; cin >> volumen >> unidad2;
				if (unidad2 == "l") {
					volumen *= 1000;
				}
				else if (unidad2 == "ml") {
				}
				else if (unidad2 == "kg") {
					volumen *= 1000;
				}
				else if (unidad2 == "gr") {
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}
				porcentaje = (masa_soluto / volumen) * 100;
				cout << "El porcentaje de concentración m/v es " << porcentaje << "%m/v" << endl;
			}
			else if (variable == "m") {
				cout << "Digite el porcentaje de concentración m/m: "; cin >> porcentaje;
				cout << "Digite el volumen de la solución y su unidad: "; cin >> volumen >> unidad2;
				if (unidad2 == "l") {
					volumen *= 1000;
				}
				else if (unidad2 == "ml") {
				}
				else if (unidad2 == "kg") {
					volumen *= 1000;
				}
				else if (unidad2 == "gr") {
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}
				masa_soluto = (porcentaje * volumen) / 100;
				cout << "La masa del soluto es " << masa_soluto << "gr" << endl;
			}
			else if (variable == "V") {
				cout << "Digite el porcentaje de concentración m/m: "; cin >> porcentaje;
				cout << "Digite la masa del soluto y su unidad: "; cin >> masa_soluto >> unidad;
				if (unidad == "kg") {
					masa_soluto *= 1000;
				}
				else if (unidad == "gr") {
				}
				else {
					cout << "\nError, unidad desconocida" << endl; exit(1);
				}
				volumen = (masa_soluto / porcentaje) * 100;
				cout << "El volumen de la solución es " << volumen << "ml" << endl;
			}
			else {
				cout << "\nError, variable desconocida" << endl;
				exit(1);
			}
		}
		else if (unidad_q == "volumen/volumen") {
		cout << "\nLas variables son las siguientes:"
			"\n%v/v(concentración)"
			"\nv(volumen del soluto)"
			"\nV(Volumen de la solución)" << endl;
		cout << "\nQue variable desea conocer: "; cin >> variable;
		if (variable == "v/v") {
			cout << "Digite el volumen del soluto y su unidad: "; cin >> volumen_soluto >> unidad;
			if (unidad == "l") {
				volumen_soluto *= 1000;
			}
			else if (unidad == "ml") {
			}
			else if (unidad == "kg") {
				volumen_soluto *= 1000;
			}
			else if (unidad == "gr") {
			}
			else {
				cout << "\nError, unidad desconocida" << endl; exit(1);
			}
			cout << "Digite el volumen de la solución y su unidad: "; cin >> volumen_solucion >> unidad2;
			if (unidad2 == "l") {
				volumen_solucion *= 1000;
			}
			else if (unidad2 == "ml") {
			}
			else if (unidad2 == "kg") {
				volumen_solucion *= 1000;
			}
			else if (unidad2 == "gr") {
			}
			else {
				cout << "\nError, unidad desconocida" << endl; exit(1);
			}
			porcentaje = (volumen_soluto / volumen_solucion) * 100;
			cout << "El porcentaje de concentración v/v es " << porcentaje << "%v/v" << endl;
		}
		else if (variable == "v") {
			cout << "Digite el porcentaje de concentración v/v: "; cin >> porcentaje;
			cout << "Digite el volumen de la solución y su unidad: "; cin >> volumen_solucion >> unidad2;
			if (unidad2 == "l") {
				volumen_solucion *= 1000;
			}
			else if (unidad2 == "ml") {
			}
			else if (unidad2 == "kg") {
				volumen_solucion *= 1000;
			}
			else if (unidad2 == "gr") {
			}
			else {
				cout << "\nError, unidad desconocida" << endl; exit(1);
			}
			volumen_soluto = (porcentaje * volumen_solucion) / 100;
			cout << "El volumen del soluto es: " << volumen_soluto << "ml" << endl;
		}
		else if (variable == "V") {
			cout << "Digite el porcentaje de concentración v/v: "; cin >> porcentaje;
			cout << "Digite el volumen del soluto y su unidad: "; cin >> volumen_soluto >> unidad;
			if (unidad == "l") {
				volumen_soluto *= 1000;
			}
			else if (unidad == "ml") {
			}
			else if (unidad == "kg") {
				volumen_soluto *= 1000;
			}
			else if (unidad == "gr") {
			}
			else {
				cout << "\nError, unidad desconocida" << endl; exit(1);
			}
			volumen_solucion = (volumen_soluto / porcentaje) * 100;
			cout << "El volumen de la solución es: " << volumen_solucion << "ml" << endl;
		}
		else {
			cout << "\nError, variable desconocida" << endl;
			exit(1);
		}
		}
		else {
		cout << "\nError, unidad desconocida" << endl;
		exit(1);
		}
	}
	else {
		cout << "\nError, tipo desconocido" << endl;
		exit(1);
	}

	return 0;
}