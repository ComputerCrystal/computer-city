//Algoritmo sobre los circuitos en serie y paralelos//

#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main(){
	
	float Ram=0,Rldo,Vam=0,Vldo,Cam=0,Cldo,Qam=0,Qldo;
	float IC,VT,QT,CT,N_resistencias,N_voltajes,N_capacitores,N_cargas,RT;
	string tipo,clase;
	
	cout<<"Que clase de circuito desea calcular: "; getline(cin,clase);
	if(clase=="resistencias" or clase=="resistencia"){   //El programa calculara lo pedido de acuerdo al circuito con resistencias//
		cout<<"De que tipo: "; getline(cin,tipo);
		if(tipo=="serie" or tipo=="en serie"){ //La clase sera un circuito en serie//
		cout<<"Cuantos valores de resistencia tiene(0 o 1 si no conoce): "; cin>>N_resistencias;
		if(N_resistencias==0 or N_resistencias==1){
			cout<<"Cuantos valores de voltajes tiene: "; cin>>N_voltajes;
			if(N_voltajes==0 or N_voltajes==1 or N_voltajes < 0){
			cout<<"Error, datos insuficientes o numero negativo";
			exit(1);
			}
			for(int i=1; i < N_voltajes; i++){
			cout<<"Digite todos los voltajes del sistema: "; cin>>Vldo;
			if(Vldo==0){
				cout<<"Error, datos insuficientes";
				exit(1);
			}
			Vam = Vam + Vldo; //calcula el voltaje total//
			}
			cout<<"Digite la intensidad de corriente: "; cin>>IC;
			if(IC==0){
				cout<<"Error, datos insuficientes";
				exit(1);
			}
			else{
			RT = Vam/IC; //calcula y almacena el dato de la resistencia total//
				cout<<"\nEl valor de la resistencia total es: "<<RT;
				cout<<"\nEl valor del voltaje total es: "<<Vam;
				cout<<"\nEl valor de la intensidad de corriente es: "<<IC;
				exit(1);
				}
		}
		else if(N_resistencias > 1){
			for(int i=1; i < N_resistencias; i++){
			cout<<"Digite todas las resistencias del sistema: "; cin>>Rldo;
			if(Rldo==0){
				cout<<"\nError, datos insuficientes";
				exit(1);
			}
			Ram = Ram + Rldo; //calcula la resistencia total//
			}
			cout<<"Cuantos valores de voltaje tiene(0 o 1 si no conoce el dato): "; cin>>N_voltajes;
			if(N_voltajes==0 or N_voltajes==1){
				cout<<"Digite la intensidad de corriente: "; cin>>IC;
				if(IC==0){
				cout<<"Error, datos insuficientes";
				exit(1);
				}
				else{
				VT = Ram * IC; //calcula y almacena el dato de la resistencia total//
				cout<<"\nEl valor de la resistencia total es: "<<Ram;
				cout<<"\nEl valor del voltaje total es: "<<VT;
				cout<<"\nEl valor de la intensidad de corriente es: "<<IC;
				exit(1);
				}
			}
			else if(N_voltajes > 1){
			for(int i=1; i < N_voltajes; i++){
			cout<<"Digite todos los voltajes del sistema: "; cin>>Vldo;
			if(Vldo==0){
				cout<<"\nError, datos insuficientes";
				exit(1);
			}
			Vam = Vam + Vldo; //calcula el voltaje total//
			}
			cout<<"\nDigite la intensidad de corriente(0 si no se conoce): "; cin>>IC;
			if(IC==0){
				IC = Vam/Ram;
				cout<<"\nEl valor de la resistencia total es: "<<Ram;
				cout<<"\nEl valor del voltaje total es: "<<Vam;
				cout<<"\nEl valor de la intensidad de corriente es: "<<IC;
			}
			else{
				cout<<"\nEl valor de la resistencia total es: "<<Ram;
				cout<<"\nEl valor del voltaje total es: "<<Vam;
				cout<<"\nEl valor de la intensidad de corriente es: "<<IC;
			}
			}
			else{
				cout<<"Error, numero negativo";
				exit(1);
			}
		}
		else{
			cout<<"Error, numero negativo";
			exit(1);
		}
}
		else if(tipo=="paralelo" or tipo=="en paralelo"){ //La clase sera un circuito en paralelo//
			cout<<"Cuantas resistencias tiene el sistema(0 o 1 si no conoce el dato): "; cin>>N_resistencias;
			if(N_resistencias==0 or N_resistencias== 1){
				cout<<"Digite el voltaje total: "; cin>>VT;
				cout<<"Digite el valor de la intensidad de corriente: "; cin>>IC;
				if(VT==0 or IC==0){
					cout<<"\nError, datos insuficientes";
					exit(1);
				}
				else{
				RT = VT/IC;
				cout<<"\nEl valor de la resistencia total es: "<<RT;
				cout<<"\nEl valor del voltaje total es: "<<VT;
				cout<<"\nEl valor de la intensidad de corriente es: "<<IC;
				exit(1);
				}
			}
			else if(N_resistencias < 0){
				cout<<"Error, numero negativo";
				exit(1);
			}
			for(int i=1; i < N_resistencias; i++){
			cout<<"Digite todas las resistencias del sistema: "; cin>>Rldo;
			if(Rldo==0){
				cout<<"\nError, datos insuficientes";
				exit(1);
			}	
			Rldo = 1/Rldo;
			Ram = Ram + Rldo;
			}
			Ram = 1/Ram; //calcular y almacenar la resistencia total//
			cout<<"\nDigite el voltaje total(0 si no se conoce el dato): "; cin>>VT;
			if(VT==0){
				cout<<"\nDigite el valor de la intensidad de corriente: "; cin>>IC;
				if(IC==0){
					cout<<"\nError, datos insuficientes";
					exit(1);
				}
				else{
					VT = Ram * IC; //calcula el valor del voltaje total si se desconoce//
				}
				cout<<"\nEl valor de la resistencia total es: "<<Ram;
				cout<<"\nEl valor del voltaje total es: "<<VT;
				cout<<"\nEl valor de la intensidad de corriente es: "<<IC;	
				exit(1); //exit provisional, futuros cambios//
			}
			cout<<"\nDigite el valor de la intensidad de corriente(0 si se desconoce el dato): "; cin>>IC;
			if(IC==0){
				IC = VT/Ram;
				cout<<"\nEl valor de la resistencia total es: "<<Ram;
				cout<<"\nEl valor del voltaje total es: "<<VT;
				cout<<"\nEl valor de la intensidad de corriente es: "<<IC;
			}
			else{
				cout<<"\nEl valor de la resistencia total es: "<<Ram;
				cout<<"\nEl valor del voltaje total es: "<<VT;
				cout<<"\nEl valor de la intensidad de corriente es: "<<IC;	
			}
		}
		else{
		cout<<"Error, clase no reconocida";
		}
	}
	else if(clase=="capacitores" or clase=="capacitor"){ //El programa calculara lo pedido de acuerdo al circuito con capacitores//
		cout<<"De que tipo: "; getline(cin,tipo);
		if(tipo=="serie" or tipo=="en serie"){ //La clase sera un circuito en serie//
		cout<<"Cuantos capacitores tiene el sistema(0 o 1 si no conoce el dato): "; cin>>N_capacitores;
		if(N_capacitores==0 or N_capacitores==1){
			cout<<"Digite la carga total: "; cin>>QT;
			cout<<"Digite el voltaje total: "; cin>>VT;
			if(QT==0 or VT==0){
				cout<<"\nError, datos insuficientes";
				exit(1);
			}
			else{
				CT = VT/QT;
				cout<<"\nEl valor de la capacitancia total es: "<<CT;
				cout<<"\nEl valor de la carga total es: "<<QT;
				cout<<"\nEl valor del voltaje total es: "<<VT;
				exit(1);				
			}
		}
		else if(N_capacitores>1){
			for(int i=1; i < N_capacitores; i++){
			cout<<"Digite todos los capacitores del sistema: "; cin>>Cldo;
			if(Cldo==0){
				cout<<"\nError, datos insuficientes";
				exit(1);
			}
			Cldo = 1/Cldo;
			Cam = Cam + Cldo;
			}
			Cam = 1/Cam; //calcular y almacenar la capacitancia total//
			cout<<"\nDigite la carga total(0 si no conoce el dato): "; cin>>QT;
			if(QT==0){
				cout<<"Digite el voltaje total: "; cin>>VT;
					if(VT==0){
						cout<<"\nError, datos insuficientes";
						exit(1);
					}
					else{
						QT = VT/Cam; //calcula la carga totall si se desconoce//
					}
				cout<<"\nEl valor de la capacitancia total es: "<<Cam;
				cout<<"\nEl valor de la carga total es: "<<QT;
				cout<<"\nEl valor del voltaje total es: "<<VT;
				exit(1);
			}
			cout<<"\nDigite el voltaje total(0 si no conoce el dato): "; cin>>VT;
			if(VT==0){
				VT = Cam * QT; //calcula el voltaje total si el dato no se conoce//
				cout<<"\nEl valor de la capacitancia total es: "<<Cam;
				cout<<"\nEl valor de la carga total es: "<<QT;
				cout<<"\nEl valor del voltaje total es: "<<VT;
				exit(1);
			}
				cout<<"\nEl valor de la capacitancia total es: "<<Cam;
				cout<<"\nEl valor de la carga total es: "<<QT;
				cout<<"\nEl valor del voltaje total es: "<<VT;
		}
		else{
			cout<<"Error, numero negativo";
			exit(1);
		}
		}
		else if(tipo=="paralelo" or tipo=="en paralelo"){ //La clase sera un circuito en paralelo//
		cout<<"Cuantos capacitores tiene el sistema(0 o 1 si no conoce el dato): "; cin>>N_capacitores;
		if(N_capacitores==0 or N_capacitores==1){
			cout<<"Digite la carga total: "; cin>>QT;
			cout<<"Digite el voltaje total: "; cin>>VT;
			if(QT==0 or VT==0){
				cout<<"\nError, datos insuficientes";
				exit(1);
			}
			else{
				CT = VT/QT;
				cout<<"\nEl valor de la capacitancia total es: "<<CT;
				cout<<"\nEl valor de la carga total es: "<<QT;
				cout<<"\nEl valor del voltaje total es: "<<VT;
				exit(1);	
				}
			}
		else if(N_capacitores>1){		
			for(int i=1; i < N_capacitores; i++){
			cout<<"Digite todos los capacitores del sistema: "; cin>>Cldo;
			if(Cldo==0){
				cout<<"\nError, datos insuficientes";
				exit(1);
			}
			Cam = Cam + Cldo; //calcula la capacitancia total//
			}
			cout<<"Cuantas cargas tiene el sistema(0 o 1 si desconoce el dato): "; cin>>N_cargas;
			if(N_cargas==0 or N_cargas==1){
			cout<<"Digite el voltaje total: "; cin>>VT;
			if(VT==0){
				cout<<"\nError, datos insuficientes";
				exit(1);
			}
			else{
				QT = VT/Cam;
				cout<<"\nEl valor de la capacitancia total es: "<<Cam;
				cout<<"\nEl valor de la carga total es: "<<QT;
				cout<<"\nEl valor del voltaje total es: "<<VT;
				exit(1);
				}
			}
			else if(N_cargas > 1){
			for(int i=1; i < N_cargas; i++){
			cout<<"Digite todas las cargas del sistema: "; cin>>Qldo;
			if(Qldo==0){
				cout<<"\nError, datos insuficientes";
				exit(1);
			}
			Qam = Qam + Qldo; //calcula la carga total//
			}
			cout<<"\nDigite el voltaje total(0 si no conoce el dato): "; cin>>VT;
			if(VT==0){
				VT = Cam * Qam;
				cout<<"\nEl valor de la capacitancia total es: "<<Cam;
				cout<<"\nEl valor de la carga total es: "<<Qam;
				cout<<"\nEl valor del voltaje total es: "<<VT;
				exit(1);
			}
			cout<<"\nEl valor de la capacitancia total es: "<<Cam;
			cout<<"\nEl valor de la carga total es: "<<Qam;
			cout<<"\nEl valor del voltaje total es: "<<VT;
			exit(1);
		}
		else{
			cout<<"Error, numero negativo";
			exit(1);
		}
	}
		else{
		cout<<"Error, numero negativo";
		exit(1);
		}
		}
		else{
			cout<<"Error, clase no reconocida";
		}
	}
	else{
		cout<<"Error, tipo no reconocido";
	}
	
	return 0;
}
