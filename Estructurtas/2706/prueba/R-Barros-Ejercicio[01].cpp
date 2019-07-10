/*Ricardo Barros
Prueba Ejercicio 1
*/
#include<iostream>
#include<stdio.h>
using namespace std;
void llenarArreglo(char arreglo[], int tam);
void mostrarArreglo(char arreglo[], int tam);
void llenarArregloMenor(char subArreglo[], int tamAux, char arreglo[], int inicio);
void llenarArreglo(char arreglo[], int tam){
	cout<<"Ingrese un caracter:"<<endl;
	for(int i=0; i<tam; i++){
		cout<<i+1<<'\t';
		cin>>arreglo[i];
		//fflush(stdin);
		//cin.getline(arreglo, tam, '\n'); //no guardaba la posicion 0 
	}

}

void mostrarArreglo(char arreglo[], int tam){
	for(int i=0; i<tam; i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
}

void llenarArregloMenor(char subArreglo[], int tamAux, char arreglo[], int inicio, int fin){
	
	for(int i=0; i<tamAux; i++){
		if(i==0){
			subArreglo[i]=arreglo[inicio-1];	
		}else{
			subArreglo[i]=arreglo[inicio+i];
		}
	}
}
int main(){
	int tam=15;
	char arreglo[tam];
	int inicio;
	int fin;
	int tamAux;
	char subArreglo[tamAux];
	llenarArreglo(arreglo, tam);
	cout<<"El arreglo es: "<<endl;
	mostrarArreglo(arreglo, tam);
	cout<<"Ingrese un numero "<<endl;
	cin>>inicio;
	cout<<"Ingrese un numero "<<endl;
	cin>>fin;
	if(inicio>fin){
		fin=inicio;
	}
	if(inicio>=0 and fin<=15){
		tamAux=fin-inicio;
	}else{
		cout<<"Existe un valor no valido para crear el otro arreglo"<<endl;
		return 0;
	}
	llenarArregloMenor(subArreglo, tamAux, arreglo, inicio);
	cout<<endl<<"******************************************"<<endl;
	mostrarArreglo(subArreglo, tamAux);
	
}
