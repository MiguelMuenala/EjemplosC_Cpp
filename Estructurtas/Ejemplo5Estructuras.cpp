#include<cstdlib>
#include<iostream>
#include<string.h>

using namespace std;

struct Cliente{
	char nombre[20];
	int nomUnidades;
	float precio;
	char estado;
}cliente0={"Miguel Muenala",23,25.5,'M'};

int main(){
	struct Cliente cliente1={"Jairo Muenala",28,26.5,'J'}; 
	Cliente cliente2={"Angelica Muenala",32,27.5,'A'};
	Cliente cliente3, cliente4;
	Cliente listado[100];
	cliente4=cliente3=cliente2=cliente1;
	
	cout << "Los valores del cliente0 son: "<< cliente0.nombre<<", "<<cliente0.nomUnidades<<", "<<cliente0.precio<<", "<<cliente0.estado <<endl;
	cout << "Los valores del cliente1 son: "<< cliente1.nombre<<", "<<cliente1.nomUnidades<<", "<<cliente1.precio<<", "<<cliente1.estado <<endl;
	cout << "Los valores del cliente2 son: "<< cliente2.nombre<<", "<<cliente2.nomUnidades<<", "<<cliente2.precio<<", "<<cliente2.estado <<endl;
	int unidades= cliente1.nomUnidades;
	
	strcpy(cliente3.nombre,"Abigail Pachacama");
	cliente3.nomUnidades= 20;
	cliente3.precio= 10;
	cliente3.estado= 'Z';
	cout << "Los valores del cliente3 son: "<< cliente3.nombre<<", "<<cliente3.nomUnidades<<", "<<cliente3.precio<<", "<<cliente3.estado <<endl;
	
	system("PAUSE");
	return 0;
}
