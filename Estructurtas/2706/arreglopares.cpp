/*Ricardo Barros
arreglo de aleatorios a arreglo par
*/
#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
void mostrarArreglo(int arreglo[], int tam);
void llenarArreglo(int arreglo[], int tam, int cont);
int evaluarPares(int arreglo[], int tam);
void mostrarArreglo(int arreglo[], int tam){
	for(int i=0; i<tam; i++){
		cout<<arreglo[i]<<endl;
	}
}
int evaluarPares(int arreglo[], int tam){
	int cont=0;
	for(int i=0; i<tam; i++){
		if(arreglo[i]%2==0){
			cont=cont+1;
		}
	}
	
	return cont;
}
void llenarArreglo(int arreglo[], int tam, int cont){
	int pares[cont];
	int tamPares=0;
	for(int i=0; i<tam; i++){
		if(arreglo[i]%2==0){
			pares[tamPares]=arreglo[i];
			tamPares++;
		}
	}
	mostrarArreglo(pares, cont);
}
 int main(){
 	int tam=10;
 	int arreglo[tam];
 	int aux;
 	for(int i=0; i<tam; i++){
 		int al=1+rand()%100;
 		arreglo[i]=al;
	 }
	 cout<<"Arreglo de aleatorios"<<endl;
	 mostrarArreglo(arreglo, tam);
	 cout<<endl<<"Arreglo Pares"<<endl;
	 aux=evaluarPares(arreglo, tam);
	 llenarArreglo(arreglo, tam, aux);
	 
	 return 0;
 }
