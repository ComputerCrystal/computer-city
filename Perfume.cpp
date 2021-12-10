//Algun programa random sobre Perfume que inventare sobre la marcha//

#include<iostream>
#include<math.h>
#include<cstring>

using namespace std;

int main(){
	//Albumes//
	string Pcb="Perfume complete best",GAME="Game",Triangle="Triangle",JPN="JPN",Level3="Level3",CosEx="Cosmic explorer",FuPop="Future pop";
	string album[] = {Pcb,GAME,Triangle,JPN,Level3,CosEx,FuPop};
	//EPs//
	string Pselection="Perfume selection",PW="Polygon wave ep";
	string ep[] = {Pselection,PW};
	//Singles//
	string SW="Sweet donuts",MonoEfe="Monochrome effect",ViDo="Vitamin drop",LMG="Linear motor girl",CC="Computer city",ElecWor="Electro world",Poly="Polyrhythm",
	BabyMaca=("Baby cruising love","Macaroni"),LoveW="Love the world",DreFig="Dream fighter",ORD="One room disco",FsNa=("Fushizen na girl","Natural ni koishite"),
	Nee="Nee",LbKnk=("Laser beam","Kasuka na kaori"),Spice="Spice",SoL="Spring of life",SamT="Spending all my time",MnM="Mirai no museum",MoL="Magic of love",
	onemm="1mm",SwRe="Sweet refrain",ClCl="Cling cling",RCPmU=("Relax in the city","Pick me up"),ST="Star train",Flash="Flash",TG="Tokyo girl",IyW="If you wanna",
	MM="Mugen mirai",Nanaro="Nananananairo",Saisei="Saisei",TiWa="Time warp",PoWa="Polygon wave single";
	string single[] = {SW,MonoEfe,ViDo,LMG,CC,ElecWor,Poly,BabyMaca,LoveW,DreFig,ORD,FsNa,Nee,LbKnk,Spice,SoL,SamT,MnM,MoL,onemm,SwRe,ClCl,RCPmU,ST,Flash,TG,IyW,MM,Nanaro,Saisei,TiWa,PoWa};
	//Compilacion//
	string FsPbox="Fan service prima box", PgcLove="Perfume global compilation", Ppc="The best p cubed";
	string comp[] = {FsPbox,PgcLove,Ppc};
	//Variables adicionales para el funcionamiento//
	string tipo,Album,EP,Single,Compilacion;
	
	cout<<"Discografia de Perfume. \nAlbumes, EPs, Singles y Compilaciones"<<endl;
	cout<<"\nQue tipo de lanzamiento busca: "; getline(cin,tipo);
		if(tipo=="Album"){
			cout<<"Los albumes son los siguientes:"<<endl;
				for (int i = 0; i < 7; i++){
				cout<<album[i]<<endl;
				}
		cout<<"\nAcerca de cual album desea conocer: "; getline(cin,Album);
			if(Album==Pcb){
				cout<<"\nNombre: Perfume ~Complete Best~"<<endl;
				cout<<"Fecha de lanzamiento: 2 de agosto del 2006"<<endl;
				cout<<"Generos: J-Pop, Electropop, Dance-Pop, Bitpop, Picopop, Shibuya-kei"<<endl;
				cout<<"Grabacion: 2003-2006; Estudio Contemode, Tokyo, Japon"<<endl;
				cout<<"Duracion: 50:47"<<endl;
				cout<<"Discografica: Tokuma Japan Communications"<<endl;
				cout<<"Productor: Yasutaka Nakata"<<endl;
				cout<<"Compositor: Yasutaka Nakata "<<endl;
				cout<<"Letra: Yasukata Nakata y Emi Kinoko"<<endl;
				cout<<"Canciones:"
				"\n1. Perfect Star Perfect Style"
				"\n2. Linear Motor Girl" 
				"\n3. Computer City" 
				"\n4. Electro World" 
				"\n5. Inryoku" 
				"\n6. Monochrome Effect" 
				"\n7. Vitamin Drop" 
				"\n8. Sweet Donuts" 
				"\n9. Foundation" 
				"\n10. Computer Driving" 
				"\n11. Perfume"
				"\n12. Wonder2";
				}
			else if(Album==GAME){
				cout<<"Nombre: GAME"<<endl;
				cout<<"Fecha de lanzamiento: 16 de abril de 2008"<<endl;
				cout<<"Generos: Electropop, J-Pop, Dance-Pop, Electro House"<<endl;
				cout<<"Grabacion: 2006-2008; Estudio Contemode, Tokyo, Japon"<<endl;
				cout<<"Duracion: 56:16"<<endl;
				cout<<"Discografica: Tokuma Japan Communications"<<endl;
				cout<<"Productor: Yasutaka Nakata"<<endl;
				cout<<"Compositor: Yasutaka Nakata"<<endl;
				cout<<"Letra: Yasukata Nakata"<<endl;
				cout<<"Canciones:"
				"\n1. Polyrhythm"
				"\n2. Plastic smile" 
				"\n3. Game" 
				"\n4. Baby Cruising Love" 
				"\n5. Chocolate Disco" 
				"\n6. Macaroni" 
				"\n7. Ceramic Girl" 
				"\n8. Take Me Take Me" 
				"\n9. Secret Secret" 
				"\n10. Butterfly" 
				"\n11. Twinkle Snow Powdery Snow"
				"\n12. Puppy Love";
			}
			else if(Album==Triangle){
				cout<<"Nombre: Triangle"<<endl;
				cout<<"Fecha de lanzamiento: 8 de julio del 2009"<<endl;
				cout<<"Generos: J-Pop, Electropop, Dance-Pop, Electro House, Dance-Pop, Synthpop"<<endl;
				cout<<"Grabacion: 2008-2009; Estudio Contemode, Tokyo, Japon"<<endl;
				cout<<"Duracion: 54:48"<<endl;
				cout<<"Discografica: Tokuma Japan Communications"<<endl;
				cout<<"Productor: Yasutaka Nakata"<<endl;
				cout<<"Compositor: Yasutaka Nakata"<<endl;
				cout<<"Letra: Yasukata Nakata"<<endl;
				cout<<"Canciones:"
				"\n1. Take Off"
				"\n2. Love the World" 
				"\n3. Dream Fighter" 
				"\n4. Edge (Triangle Mix)" 
				"\n5. Night Flight" 
				"\n6. Kiss and Music" 
				"\n7. Zero Gravity" 
				"\n8. I Still Love U" 
				"\n9. The Best Thing" 
				"\n10. Speed of Sound" 
				"\n11. One Room Disco"
				"\n12. Negai (Album Mix)";					
			}
			else if(Album==JPN){
				cout<<"Nombre: JPN"<<endl;
				cout<<"Fecha de lanzamiento: 30 de noviembre del 2011"<<endl;
				cout<<"Generos: Electropop, J-Pop, Dance-Pop, Glitch Pop, Bitpop"<<endl;
				cout<<"Grabacion: 2010-2011"<<endl;
				cout<<"Duracion: 55:10"<<endl;
				cout<<"Discografica: Tokuma Japan Communications,(Japan)Universal Music (Asia)"<<endl;
				cout<<"Productor: Yasutaka Nakata"<<endl;
				cout<<"Compositor: Yasutaka Nakata"<<endl;
				cout<<"Letra: Yasukata Nakata"<<endl;
				cout<<"Canciones:"
				"\n1. The Opening"
				"\n2. Laser Beam" 
				"\n3. Glitter" 
				"\n4. Natural ni Koishite" 
				"\n5. My Color" 
				"\n6. Toki no Hari" 
				"\n7. Nee" 
				"\n8. Kasuka na Kaori" 
				"\n9. 575" 
				"\n10. Voice" 
				"\n11. Kokoro no Sports"
				"\n12. Have a Stroll"
				"\n13. Fushizen na Girl"
				"\n14. Spice";	
			}
			else if(Album==Level3){
				cout<<"Nombre: Level3"<<endl;
				cout<<"Fecha de lanzamiento: 2 de octubre del 2013"<<endl;
				cout<<"Generos: Electropop, J-Pop, Dance-Pop, Electro House, Dance-Pop, Progressive House, Complextro"<<endl;
				cout<<"Grabacion: 2012-2013"<<endl;
				cout<<"Duracion: 64:39"<<endl;
				cout<<"Lenguajes: japones, ingles"<<endl;
				cout<<"Discografica: Universal J, Perfume"<<endl;
				cout<<"Productor: Yasutaka Nakata"<<endl;
				cout<<"Compositor: Yasutaka Nakata"<<endl;
				cout<<"Letra: Yasukata Nakata"<<endl;	
				cout<<"Canciones:"
				"\n1. Enter the Sphere"
				"\n2. Spring of Life" 
				"\n3. Magic of Love" 
				"\n4. Clockwork" 
				"\n5. 1mm" 
				"\n6. Mirai no Museum" 
				"\n7. Party Maker" 
				"\n8. Furikaeru to Iru Yo" 
				"\n9. Point" 
				"\n10. Daijyobanai" 
				"\n11. Handy Man"
				"\n12. Sleeping Beauty"
				"\n13. Spending All My Time (album mix)"
				"\n14. Dream Land";	
			}
			else if(Album==CosEx){
				cout<<"Nombre: Cosmic Explorer"<<endl;
				cout<<"Fecha de lanzamiento: 6 de abril del 2016"<<endl;
				cout<<"Generos: Electropop, J-Pop, Dance-Pop, Electro House, Tropical House"<<endl;
				cout<<"Grabacion: agosto 2013-diciembre 2015"<<endl;
				cout<<"Duracion: 58:37"<<endl;
				cout<<"Lenguajes: japones"<<endl;
				cout<<"Discografica: Universal J, Perfume Records"<<endl;
				cout<<"Productor: Yasutaka Nakata"<<endl;
				cout<<"Compositor: Yasutaka Nakata"<<endl;
				cout<<"Letra: Yasukata Nakata"<<endl;
				cout<<"Canciones:"
				"\n1. Navigate"
				"\n2. Cosmic Explorer" 
				"\n3. Miracle Worker" 
				"\n4. Next Stage with You" 
				"\n5. Story" 
				"\n6. Flash (Album mix)"
				"\n7. Sweet Refrain (Album mix)"
				"\n8. Baby Face" 
				"\n9. Tokimeki Lights (Album mix)"
				"\n10. Star Train (Album mix)" 
				"\n11. Relax in the City"
				"\n12. Pick Me Up"
				"\n13. Cling Cling (Album mix)"
				"\n14. Hold Your Hand";	
			}
			else if(Album==FuPop){
				cout<<"Nombre: Future Pop"<<endl;
				cout<<"Fecha de lanzamiento: 15 de agosto del 2018"<<endl;
				cout<<"Generos: Electropop, J-Pop, Future Bass, Synthpop, Electro House"<<endl;
				cout<<"Grabacion: 2016-2018"<<endl;
				cout<<"Duracion: 42:09"<<endl;
				cout<<"Lenguajes: japones"<<endl;
				cout<<"Discografica: Universal J, Perfume"<<endl;
				cout<<"Productor: Yasutaka Nakata"<<endl;
				cout<<"Compositor: Yasutaka Nakata"<<endl;
				cout<<"Letra: Yasukata Nakata"<<endl;
				cout<<"Canciones:"
				"\n1. Start-Up"
				"\n2. Future Pop" 
				"\n3. If You Wanna" 
				"\n4. Tokyo Girl" 
				"\n5. Fusion" 
				"\n6. Tiny Baby" 
				"\n7. Let Me Know" 
				"\n8. Chorairin" 
				"\n9. Mugenmirai" 
				"\n10. Housekino Ame" 
				"\n11. Tenku"
				"\n12. Everyday";	
			}
			else{
				cout<<"Error, ese album no existe";
			}
				}
		else{
			cout<<"Error, esa categoria no existe";
		}
	
	return 0;
}
