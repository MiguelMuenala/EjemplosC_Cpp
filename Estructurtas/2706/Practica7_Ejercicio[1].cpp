/*Ricardo Barros
Practica 7 ejercicio 1
Crear la estructura trianguloRectangulo, esta estructura tiene un arreglo de enteros que contiene los valores de los catetos del triángulo,
tiene una hipotenusa, un área.
Crear una función para mostrar toda la información de la estructura triánguloRectángulo.
Crear dos funciones por referencia, una para calcular la hipotenusa y otra para calcular el área, las funciones no retornan nada.
En la clase main crear dos triángulos y probar todas las funciones.
*/
#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<ctime>
using namespace std;
struct trianguloRectangulo{
	int catetos[2];
	double area;
	double hipotenusa;
};
void mostrarTriangulos(trianguloRectangulo);
void llenarCatetos(trianguloRectangulo &t);
void calcularHipotenusa(trianguloRectangulo &t);
void calcularArea(trianguloRectangulo &t);
void llenarCatetos(trianguloRectangulo &t){
		cout<<"Ingrese valores para los catetos: "<<endl;
	for(int i=0; i<2; i++){
		cin>>t.catetos[i];
		if(t.catetos[i]>0 ){
			t.catetos[i]=t.catetos[i];
		}else{
			cout<<"Valor erroneo, considere valores mayores a 0"<<endl;
			t.catetos[i]=0;
			i=0;
		}
	}cout<<endl;
}

void calcularHipotenusa(trianguloRectangulo &t){
	int suma=0;
	int c1=pow(t.catetos[0],2);
	int c2=pow(t.catetos[1], 2);
	suma=c1+c2;
	t.hipotenusa=sqrt(suma);
}

void calcularArea(trianguloRectangulo &t){
	t.area=(t.catetos[0]*t.catetos[1]);
	t.area=t.area/2;
}

void mostrarTriangulos(trianguloRectangulo t){

	cout<<"Cateto1: "<<t.catetos[0]<<endl;
	cout<<"Cateto2: "<<t.catetos[1]<<endl;
	calcularHipotenusa(t);
	calcularArea(t);
	cout<<"Hipotenusa: "<<t.hipotenusa<<endl;
	cout<<"Area: "<<t.area<<endl;
}

int main(){
	trianguloRectangulo tri1;
	trianguloRectangulo tri2;
	
	cout<<"Triangulo 1: "<<endl;
	llenarCatetos(tri1);
	mostrarTriangulos(tri1);
	cout<<endl<<"Trianculo 2: "<<endl;
	llenarCatetos(tri2);
	mostrarTriangulos(tri2);
	
	return 0;
}
