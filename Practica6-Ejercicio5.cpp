/*Autor: Brayan Cunduri
Ejercicio 5

*/
#include<iostream>
using namespace std; //definir arreglo ventas; , filas los productos   10.8-->vendio cada vendedor 
int productos(int calcular);
int main(){
double ventas[5][4];
double arreglo1[5][4];
double arreglo2[5][4];
double aux1=12.5;
double aux2=13.5;
double aux3=10.5;
double aux4=16.8;
double aux5=17.25;


	for(int i=0; i<5 ;i++){
	   for(int j=0; j<4 ;j++){
	    //se piede [][]-->esto para inicializar n elementos
	   	cin>>ventas[i][j];
	   	productos(ventas[i][j]);
		}
	}
	for(int i=0; i<5; i++){//filas
		for(int j=0; j<4 ;j++){//columnas
			cout<<ventas[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(int i=0; i<5; i++){//filas
	for(int j=0; j<4 ;j++){//columnas
			cout<<ventas[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
	
productos(int calcular){

switch(opcion){
	case 1:
	aux1=aux1+ventas[i][j];
	break;
	case 2:
	aux2=aux2+ventas[i][j];
	break;
	case 2:
	aux3=aux3+ventas[i][j];
	break;
	case 2:
	aux4=aux4+ventas[i][j];
	break;
	case 2:
	aux5=aux5+ventas[i][j];
	break;
}
}
ventasdia(int producto){
	
	
	
	
}

