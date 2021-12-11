//Movimieto rectilineo uniformemente acelerado(M.R.U.A)// 

#include<iostream>
#include<math.h>
#include<cstring>
#include<string>

using namespace std;

int main(){
	
	float a,vi,vf,t,d;
	string distancia="distancia",aceleracion="aceleracion",velocidadi="velocidad inicial", velocidadf="velocidad final",tiempo="tiempo",variable;
	cout<<"Que variable desea calcular: "; getline(cin,variable);
	if(distancia==variable){
	cout<<"\nDigite el valor de la aceleracion en m/s^2: "; cin>>a;
	cout<<"Digite el valor de la velocidad inicial en m/s: "; cin>>vi;
	cout<<"Digite el valor de la velocidad final en m/s: "; cin>>vf;
	cout<<"Digite el valor del tiempo en segundos: "; cin>>t;
		if (vf==0){
		d = (vi*t)+((a*pow(t,2))/2);
		cout<<"\nLa distancia en metros es: "<<d;
		}
		else if (t==0){
		d = (pow(vf,2)-pow(vi,2))/(2*a);
		cout<<"\nLa distancia en metros es: "<<d;	
		}
		else if (a==0){
		d = ((vi+vf)/2)*t;	
		cout<<"\nLa distancia en metros es: "<<d;
		}
		else{
		cout<<"\nError, datos erroneos";
		}
	}
	else if (aceleracion==variable){
	cout<<"\nDigite el valor de la distancia en metros: "; cin>>d;
	cout<<"Digite el valor de la velocidad inicial en m/s: "; cin>>vi;
	cout<<"Digite el valor de la velocidad final en m/s: "; cin>>vf;
	cout<<"Digite el valor del tiempo en segundos: "; cin>>t;
		if (vf==0){
		a = ((d-vi*t)*2)/pow(t,2);
		cout<<"\nLa aceleracion en m/s^2 es: "<<a;
		}
		else if (d==0){
		a = (vf-vi)/t;
		cout<<"\nLa aceleracion en m/s^2 es: "<<a;
		}
		else if (t==0){
		a = (pow(vf,2)-pow(vi,2))/(2*d);
		cout<<"\nLa aceleracion en m/s^2 es: "<<a;
		}
		else{
		cout<<"\nError, datos erroneos";	
		}
	}
	else if (velocidadi==variable){
	cout<<"\nDigite el valor de la distancia en metros: "; cin>>d;
	cout<<"Digite el valor de la aceleracion en m/s^2: "; cin>>a;
	cout<<"Digite el valor de la velocidad final en m/s: "; cin>>vf;
	cout<<"Digite el valor del tiempo en segundos: "; cin>>t;		
		if (vf==0){
		vi = (d-((a*pow(t,2))/2))*t;
		cout<<"\nLa velocidad inicial en m/s es: "<<vi;
		}
		else if (d==0){
		vi = vf-(t*a);
		cout<<"\nLa velocidad inicial en m/s es: "<<vi;
		}
		else if (t==0){
		vi = sqrt(pow(vf,2)-(2*d*a));
			if (vi>0){
			cout<<"\nLa velocidad inicial en m/s es: "<<vi;
			}
			else{
			cout<<"\nEl resultado es imaginario";
			}
		}
		else if (a==0){
		vi = ((2*d)/t) - vf;
		cout<<"\nLa velocidad inicial en m/s es: "<<vi;
		}
		else{
		cout<<"\nError, datos erroneos";		
		}
	}
	else if (velocidadf==variable){
	cout<<"\nDigite el valor de la distancia en metros: "; cin>>d;
	cout<<"Digite el valor de la aceleracion en m/s^2: "; cin>>a;
	cout<<"Digite el valor de la velocidad inicial en m/s: "; cin>>vi;
	cout<<"Digite el valor del tiempo en segundos: "; cin>>t;
		if (t==0){
		vf = sqrt(pow(vi,2)+(2*d*a));
		cout<<"\nLa velocidad final en m/s es: "<<vf;
		}
		else if (d==0){
		vf = vi + (t*a);
		cout<<"\nLa velocidad final en m/s es: "<<vf;
		}
		else if (a==0){
		vf = ((2*d)/t)-vi;
		cout<<"\nLa velocidad final en m/s es: "<<vf;
		}
		else {
		cout<<"\nError, datos erroneos";		
		}
	}
	else if (tiempo==variable){
	cout<<"\nDigite el valor de la distancia en metros: "; cin>>d;
	cout<<"Digite el valor de la velocidad inicial en m/s: "; cin>>vi;
	cout<<"Digite el valor de la velocidad final en m/s: "; cin>>vf;
	cout<<"Digite el valor de la aceleracion en m/s^2: "; cin>>a;
		if (d==0){
		t = (vf-vi)/a;
		cout<<"\nEl tiempo en segundos es: "<<t;
		}
		else if (a==0){
		t = (2*d)/(vi+vf);
		cout<<"\nEl tiempo en segundos es: "<<t;
		}
		else{
		cout<<"\nError, datos erroneos";		
		}
	}	
	else{
	cout<<"\nError, variable desconocida";
	}
	
	return 0;
}
