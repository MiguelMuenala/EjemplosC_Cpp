/*Ricardo Barros
estructura circulo
*/
#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
struct circulo{
	int radio;
	int diametro;
	double area;
}circulo1={1};

double calcularArea(int radio);
void calculoArea(circulo&c);
void mostrarCirculo(circulo c);
circulo duplicarCirculo(circulo);
int conteoCirculos(circulo[], int tam);
circulo evaluarCirculoGrande(circulo[], int tam);
void llenarArregloCirculosPares(circulo[], int);

void calculoArea(circulo&c){
	c.diametro=2*c.radio;
	c.area=pow(c.radio, 2)*3.1416;
}

double calcularArea(int radio){
	double area=pow(radio, 2)*3.1416;
	
	return area;
}

void mostrarCirculo(circulo c){
	cout<<"Radio: "<<c.radio<<endl;
	cout<<"Diametro: "<<c.diametro<<endl;
	cout<<"Area: "<<c.area<<endl<<endl;
}

circulo duplicarCirculo(circulo c){
	circulo c2;
	c2.radio=c.radio*2;
	c2.area=pow(c2.radio, 2)*3.1416;
	c2.diametro=2*c2.radio;
	
	return c2;
}

int conteoCirculos(circulo c[], int tam){
	int cont=0;
	for(int i=0; i<tam; i++){
		if(c[i].radio%2==0){
			cont=cont+1;
		}
	}
	
	return cont;
}

circulo evaluarCirculoGrande(circulo c[], int tam){
	circulo grande;
	int i=0;
		do{
		if(c[i].radio>c[i+1].radio and c[i].radio>c[i+2].radio){
			grande=c[i];
		}else{
			if(c[i+1].radio>c[i+2].radio){
					grande=c[i+1];
			}else{
				grande=c[i+2];
			}
		}
		++i;
		}while(i<2);
		
	return grande;
}

void llenarArregloCirculosPares(circulo c[], int tam){
	int aux2=0;
	int tamAux=0;
	aux2=conteoCirculos(c,tam);
	circulo pares[aux2];
	for(int i=0; i<tam; i++){
		if(c[i].radio%2==0){
			pares[tamAux]=c[i];
			tamAux++;
		}
	}
	
	for(int j=0; j<tamAux; j++){
		mostrarCirculo(pares[j]);
	}

	
}


int main(){
	int tamArreCir=5;
	int aux=0;
	circulo mayor;
	circulo cincoCir[tamArreCir];
	srand(time(0));
	//circulo1.area=calcularArea(circulo1.radio);
	/*calculoArea(circulo1);
	cout<<"Radio: "<<circulo1.radio<<endl;
	cout<<"Diametro: "<<circulo1.diametro<<endl;
	cout<<"Area: "<<circulo1.area<<endl;
	mostrarCirculo(circulo1);
	mostrarCirculo(duplicarCirculo(circulo1));*/
	for(int i=0; i<tamArreCir; i++){
		int alradio=1+rand()%4;
		cincoCir[i].radio=alradio;
		calculoArea(cincoCir[i]);
		mostrarCirculo(cincoCir[i]);
	}
	aux=conteoCirculos(cincoCir, tamArreCir);
	cout<<"Existen "<<aux<<" Circulos de radio par."<<endl<<endl;
	mayor=evaluarCirculoGrande(cincoCir, tamArreCir);
	cout<<"El circulo mas grande es "<<endl;
	mostrarCirculo(mayor);
	cout<<"Los circulos pares son "<<endl;
	llenarArregloCirculosPares(cincoCir, tamArreCir);
	
	return 0;
}
